#ifndef BUTTONS_H
#define BUTTONS_H

#include <QObject>
#include <cstdio>
#include <QDebug>
#include <wiringPi.h>

enum Button {dock, sync, station};

class Buttons : public QObject
{
    Q_OBJECT
public:
    explicit Buttons(QObject *parent = nullptr);
    void press(Button button);
    void relese(Button button);


signals:
    void pressed();
    void dockRelesed();

private:
    void pressDock();
    void pressSync();
    void pressStation();
    void releaseDock();
    void releaseSync();
    void releaseStation();
    const int m_dockRele1{7};
    const int m_dockRele2{0};
    const int m_syncRele1{21};
    const int m_syncRele2{22};
    const int m_stationRele1{2};
    const int m_stationRele2{3};
    bool m_isDockPressed{false};
    bool m_isSyncPressed{false};
    bool m_isStationPressed{false};

};

#endif // BUTTONS_H
