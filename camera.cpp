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
    //change to class based python scripts


    connect(m_takePictureProcess, &QProcess::finished, [&](){
        emit pictureTaken();
        processData();

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
    parseData(jsonData);

}

void Camera::parseData(QByteArray jsonData)
{

    if(jsonData[1]=='0'){
        m_resultOfLights["leftLever"]=false;
    }else{
        m_resultOfLights["leftLever"]=true;
    }

    if(jsonData[4]=='0'){
        m_resultOfLights["rightLever"]=false;
    }else{
        m_resultOfLights["rightLever"]=true;
    }

    if(jsonData[7]=='0'){
        m_resultOfLights["syncButton"]=false;
    }else{
        m_resultOfLights["syncButton"]=true;
    }

    if(jsonData[10]=='0'){
        m_resultOfLights["stationButton"]=false;
    }else{
        m_resultOfLights["stationButton"]=true;
    }

    if(jsonData[13]=='0'){
        m_resultOfLights["dockButton"]=false;
    }else{
        m_resultOfLights["dockButton"]=true;
    }
}

bool Camera::getStatus(light light)
{
    if(light==leftLEVER){
        return m_resultOfLights["leftLever"];
    }
    if(light==rightLEVER){
        return m_resultOfLights["rightLever"];
    }
    if(light==syncBUTTON){
        return m_resultOfLights["syncButton"];
    }
    if(light==stationBUTTON){
        return m_resultOfLights["stationButton"];
    }
    if(light==dockBUTTON){
        return m_resultOfLights["dockButton"];
    }
    return false;
}
