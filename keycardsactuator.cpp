#include "keycardsactuator.h"

#include <QDebug>

// KeyCardsActuator::KeyCardsActuator(QSerialPort *serial, QObject *parent)
//     : QObject(parent)
//     , m_serial(serial)
// {
//     connect(m_serial, &QSerialPort::readyRead, this, &KeyCardsActuator::handleReadyRead);
// }

KeyCardsActuator::KeyCardsActuator(QSerialPort *serial)
{
    m_serial=serial;
    connect(m_serial,&QSerialPort::readyRead,this,&KeyCardsActuator::handleReadyRead);
    connect(this, &KeyCardsActuator::rightCardStatusChanged, this, &KeyCardsActuator::printRightCardStatusWhenChanged);
    //this->approchRightCard();
}

void KeyCardsActuator::approchLeftCard()
{
    m_serial->write("\n");
    m_serial->write(QByteArray{"1\r\n"});
    m_serial->flush();
}

void KeyCardsActuator::approchRightCard()
{
    if(!m_serial->isOpen()){
        qDebug() << "Serial port is not open!";

    }else {
        qDebug() << "Serial port is open!";

    }
    qDebug()<<"Should send 2 on serial";
    m_serial->write("\n");
    qint64 written=m_serial->write(QByteArray{"2\r\n"});


    qDebug()<<"Bytes written: "<<written;
    m_serial->flush();
    qDebug()<<"ERROR:"<<m_serial->errorString();
    emit allCardMoveFinished();
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
    auto readData = m_serial->readLine();

    QString data = readData.simplified();

    qDebug()<<"I AM READING SERIAL";
    if(data == "left home")
        setLeftCardStatus(1);

    if(data == "left approached")
        setLeftCardStatus(2);

    if(data == "right home"){
        setRightCardStatus(1); //emit signal
        emit allCardMoveFinished();
        qDebug()<<"Right is home!";
    }
    if(data == "right approached")
        setRightCardStatus(2);

}
