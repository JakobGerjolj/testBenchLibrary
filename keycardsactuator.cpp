#include "keycardsactuator.h"

#include <QDebug>
#include <QTimer>

KeyCardsActuator::KeyCardsActuator(QSerialPort *serial, QObject *parent)
    : QObject(parent)
    , m_serial(serial)
{
    connect(m_serial, &QSerialPort::readyRead, this, &KeyCardsActuator::handleReadyRead);
}

void KeyCardsActuator::approchLeftCard()
{

    m_serial->write(QByteArray{"\n"});

    m_serial->write(QByteArray{"1\r\n"});
    m_serial->flush();
    QTimer::singleShot(1000, this, [=](){m_isLeftmoving = true;});
}

void KeyCardsActuator::approchRightCard()
{
    m_serial->write("\n");
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
    auto readData = m_serial->readLine();

    QString data = readData.simplified();

    qDebug()<<"READING SERIAL!";

    if(data == "left home"){
        setLeftCardStatus(1);
        qDebug()<<"I am getting left home!";
        if(m_isLeftmoving)
        {
            m_isLeftmoving = false;
            qDebug()<<"Should emit signal!";
            emit leftCardFinishedMoving();
        }

    }

    if(data == "left approached")
        setLeftCardStatus(2);

    if(data == "right home"){
        setRightCardStatus(1); //emit signal
        if(m_isRightmoving){
        emit rightCardFinishedMoving();
        qDebug()<<"Right is home!";
        }
    }
    if(data == "right approached")
        setRightCardStatus(2);

}
