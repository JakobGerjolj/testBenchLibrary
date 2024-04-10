#include "camera.h"

Camera::Camera(QObject *parent)
    : QObject{parent}
{
    m_resultOfLights.insert("leftLever", false);
    m_resultOfLights.insert("rightLever", false);
    m_resultOfLights.insert("syncButton", false);
    m_resultOfLights.insert("stationButton",false);
    m_resultOfLights.insert("dockButton",false);
}

void Camera::takePicture()
{
    m_takePictureProcess= new QProcess;

    connect(m_takePictureProcess, &QProcess::readyReadStandardOutput, [&](){
        QByteArray output = m_takePictureProcess->readAllStandardOutput();
        qDebug() << "Process output: "<< output;

    });

    qDebug()<<"Trying to take photo!";
    m_takePictureProcess->start(m_command, QStringList{"/home/bench/python_scripts_for_bench/pictureTaker.py"});


    connect(m_takePictureProcess, &QProcess::finished, [&](){
        qDebug()<<"Process finished!";
        emit pictureTaken();
        qDebug()<<"Here is output of it: "<<m_takePictureProcess->readAllStandardOutput();


    });


    connect(m_takePictureProcess, &QProcess::errorOccurred, [&](){
        qDebug()<<m_takePictureProcess->error();
    });








}

void Camera::processData()
{
    QString filePath="/home/bench/python_scripts_for_bench/result.json";

    QFile jsonFile(filePath);
    if (!jsonFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Failed to open JSON file:" << jsonFile.errorString();

    }
    QByteArray jsonData = jsonFile.readAll();
    jsonFile.close();



    if(jsonData[1]=='0'){
        m_resultOfLights["leftLever"]=false;
    }else{
        m_resultOfLights["leftLever"]=true;
    }

    if(jsonData[3]=='0'){
        m_resultOfLights["rightLever"]=false;
    }else{
        m_resultOfLights["rightLever"]=true;
    }

    if(jsonData[5]=='0'){
        m_resultOfLights["syncButton"]=false;
    }else{
        m_resultOfLights["syncButton"]=true;
    }

    if(jsonData[7]=='0'){
        m_resultOfLights["stationButton"]=true;
    }else{
        m_resultOfLights["stationButton"]=false;
    }

    if(jsonData[9]=='0'){
        m_resultOfLights["dockButton"]=true;
    }else{
        m_resultOfLights["dockButton"]=false;
    }

    qDebug()<<"Left lever"<<m_resultOfLights["leftLever"];



}

bool Camera::getStatus(Result result)
{
    if(result==leftLEVER){
        return m_resultOfLights["leftLever"];
    }
    if(result==rightLEVER){
        return m_resultOfLights["rightLever"];
    }
    if(result==syncBUTTON){
        return m_resultOfLights["syncButton"];
    }
    if(result==stationBUTTON){
        return m_resultOfLights["stationButton"];
    }
    if(result==dockBUTTON){
        return m_resultOfLights["dockButton"];
    }
    return false;
}
