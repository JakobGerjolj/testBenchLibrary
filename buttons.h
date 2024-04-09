#ifndef BUTTONS_H
#define BUTTONS_H

#include <QObject>
#include <cstdio>
#include <QDebug>
#include <wiringPi.h>

class Buttons : public QObject
{
    Q_OBJECT
public:
    explicit Buttons(QObject *parent = nullptr);

    void pressDock();
    void pressSync();
    void pressStation();

signals:

private:
    const int m_dockRele1{7};
    const int m_dockRele2{0};
    bool m_isDockPressed{false};
    bool m_isSyncPressed{false};
    bool m_isStationPressed{false};

};

#endif // BUTTONS_H
