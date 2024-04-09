#include "buttons.h"

Buttons::Buttons(QObject *parent)
    : QObject{parent}
{
    wiringPiSetup();
    pinMode(m_dockRele1, OUTPUT);
    pinMode(m_dockRele2, OUTPUT);
    digitalWrite(m_dockRele1, HIGH);
    digitalWrite(m_dockRele2, HIGH);


}

void Buttons::pressDock()
{

    //Dock_rele 1 - GPIO 4 - WPi pin 7
    //Dock_rele 2 - GPIO 17 - WPi pin 0
    digitalWrite(m_dockRele1, HIGH);
    digitalWrite(m_dockRele2, LOW);
    delay(1130);
    digitalWrite(m_dockRele1,LOW);
    digitalWrite(m_dockRele2,HIGH);
    delay(1130);




}

void Buttons::pressSync()
{

}

void Buttons::pressStation()
{

}
