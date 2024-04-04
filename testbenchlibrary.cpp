#include "testbenchlibrary.h"

TestBenchLibrary::TestBenchLibrary(QSerialPort* serial_keycards) {
    m_keyCardsActuator=new KeyCardsActuator(serial_keycards);

}

void TestBenchLibrary::move_correct_card()
{
    m_keyCardsActuator->approchRightCard();
}
