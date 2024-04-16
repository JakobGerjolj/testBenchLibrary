#include "buttons.h"

#include <qtimer.h>

Buttons::Buttons(QObject *parent)
    : QObject{parent}
{
    //wiringPiSetup();
    pinMode(m_dockRele1, OUTPUT);
    pinMode(m_dockRele2, OUTPUT);
    pinMode(m_syncRele1, OUTPUT);
    pinMode(m_syncRele2, OUTPUT);
    pinMode(m_stationRele1, OUTPUT);
    pinMode(m_stationRele2, OUTPUT);
    digitalWrite(m_dockRele1, HIGH);
    digitalWrite(m_dockRele2, HIGH);
    digitalWrite(m_syncRele1, HIGH);
    digitalWrite(m_syncRele2, HIGH);
    digitalWrite(m_stationRele1, HIGH);
    digitalWrite(m_stationRele2, HIGH);

}

void Buttons::press(Button button)
{
    if(button==sync){
        pressSync();
    }
    if(button==dock){
        pressDock();
    }
    if(button==station){
        pressStation();
    }
}

void Buttons::pressDock()
{

    //Dock_rele 1 - GPIO 4 - WPi pin 7
    //Dock_rele 2 - GPIO 17 - WPi pin 0
    digitalWrite(m_dockRele1, HIGH);
    digitalWrite(m_dockRele2, LOW);
    QTimer::singleShot(1130, [=](){
        releaseDock();
    });;

}

void Buttons::pressSync()
{
    //Sync_rele 1 - GPIO 5 - WPi pin 21
    //Sync_rele 2 - GPIO 6 - WPi pin 22
    digitalWrite(m_syncRele1, HIGH);
    digitalWrite(m_syncRele2, LOW);
    QTimer::singleShot(1200, [=](){
        releaseSync();
    });


}

void Buttons::pressStation()
{
    //Station_rele 1 - GPIO 27 - Wpi pin 2
    //Station_rele 2 - GPIO 22 - Wpi pin 3
    digitalWrite(m_stationRele1, HIGH);
    digitalWrite(m_stationRele2, LOW);
    QTimer::singleShot(1200, [=](){
        releaseStation();
    });

}

void Buttons::releaseDock()
{
    digitalWrite(m_dockRele1,LOW);
    digitalWrite(m_dockRele2,HIGH);
    QTimer::singleShot(1200, [=](){
        emit pressed();
        digitalWrite(m_dockRele1,HIGH);
        digitalWrite(m_dockRele2,HIGH);
    });;


}

void Buttons::releaseSync()
{
    digitalWrite(m_syncRele1,LOW);
    digitalWrite(m_syncRele2,HIGH);
    QTimer::singleShot(1200,[=](){
        emit pressed();
        digitalWrite(m_syncRele1,HIGH);
        digitalWrite(m_syncRele2,HIGH);
    });

}

void Buttons::releaseStation()
{
    digitalWrite(m_stationRele1, LOW);
    digitalWrite(m_stationRele2, HIGH);
    QTimer::singleShot(1200, [=](){
        emit pressed();
        digitalWrite(m_stationRele1, HIGH);
        digitalWrite(m_stationRele2, HIGH);
    });

}
