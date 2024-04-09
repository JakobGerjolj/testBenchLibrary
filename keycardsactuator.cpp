#include "keycardsactuator.h"

#include <QDebug>
#include <QTimer>

KeyCardsActuator::KeyCardsActuator(QSerialPort *serial, QObject *parent)
    : QObject(parent)
    , m_serial(serial)
{
    qDebug()<<"Creating Key Cards Actuator! LLLLL";
    connect(m_serial, &QSerialPort::readyRead, this, &KeyCardsActuator::handleReadyRead);
}

void KeyCardsActuator::approchLeftCard()
{

    qDebug()<<"Sending left card!";
    m_serial->write(QByteArray{"\n"});
    m_serial->write(QByteArray{"1\r\n"});
    m_serial->flush();
    QTimer::singleShot(1000, this, [=](){m_isLeftmoving = true;});
}

void KeyCardsActuator::approchRightCard()
{

    qDebug()<<"Sending right card!";
    m_serial->write(QByteArray{"\n"});
    m_serial->write(QByteArray{"2\r\n"});
    m_serial->flush();
    QTimer::singleShot(1000, this, [=](){m_isRightmoving = true;});
}

void KeyCardsActuator::moveCorrectCard()
{
    qDebug()<<"Should move correct card";
    this->approchRightCard();
}

int KeyCardsActuator::leftCardStatus() const
{
    return m_leftCardStatus;
}

int KeyCardsActuator::rightCardStatus() const
{
    return m_rightCardStatus;
}

void KeyCardsActuator::setLeftCardStatus(int leftCardStatus)
{
    if (m_leftCardStatus == leftCardStatus)
        return;

    m_leftCardStatus = leftCardStatus;
    emit leftCardStatusChanged(m_leftCardStatus);
}

void KeyCardsActuator::setRightCardStatus(int rightCardStatus)
{
    if (m_rightCardStatus == rightCardStatus)
        return;

    m_rightCardStatus = rightCardStatus;
    emit rightCardStatusChanged(m_rightCardStatus);
}

void KeyCardsActuator::printRightCardStatusWhenChanged()
{
    qDebug()<<"Right card value: "<<m_rightCardStatus;
}

void KeyCardsActuator::handleReadyRead()
{

    QByteArray readData = m_serial->readAll();
    QString temp=QString::fromUtf8(readData);
    qDebug()<<"Data from serial: "<<temp;
    m_data.append(temp);



    QByteArray leftCode="left home";
    QByteArray rightCode="right home";
    if(m_data.contains(leftCode)){
        setLeftCardStatus(1);
        emit leftCardFinishedMoving();
        m_data="";


    }

    if(m_data.contains(rightCode)){
        setRightCardStatus(1);
        emit rightCardFinishedMoving();
        m_data="";

    }


    m_isFullBuffer=false;
    m_buffer="";
    qDebug()<<"Full string: "<<m_data<<"---------------------------";



}

QString KeyCardsActuator::getCommand(QString &inputData)
{



    QString temp;

    inputData.replace("\r\n","");

    if(m_nextData[0]=='<'){
        m_data=m_nextData;
        m_nextData="";
    }

    if(!inputData.isEmpty()){
        if(inputData[0]=='<'){
            int firstDelimiter=inputData.indexOf('>');
            QString comand=inputData.mid(0,firstDelimiter);
            if(inputData.size()==firstDelimiter+1){


            }
        }
    }


    if(!inputData.isEmpty()){
        if(inputData[0]=='<' && inputData[inputData.indexOf('>')] == '>'){

            m_data=inputData;
            m_isFullBuffer=true;
            if(inputData[inputData.size()] == '<'){
                m_nextData=inputData.mid(inputData.indexOf('>')+1,inputData.size());

            }



        }else if(inputData[0]=='<'  &&  inputData[inputData.size() - 1] != '>'){
            m_data=inputData;
            m_isFullBuffer=false;

        }else if(inputData[0]!='<' && inputData[inputData.size() - 1] == '>'){
            m_data.append(inputData);
            m_isFullBuffer=true;

        }

    }


    return m_data;


}
