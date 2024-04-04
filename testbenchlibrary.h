#ifndef TESTBENCHLIBRARY_H
#define TESTBENCHLIBRARY_H

#include "keycardsactuator.h"

class TestBenchLibrary
{
public:
    TestBenchLibrary(QSerialPort* serial_keyCards);
    void move_correct_card();

private:
    KeyCardsActuator* m_keyCardsActuator;
};

#endif // TESTBENCHLIBRARY_H
