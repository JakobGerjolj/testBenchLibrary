#ifndef KEYCARDSACTUATOR_H
#define KEYCARDSACTUATOR_H

#include <QObject>
#include <QSerialPort>
#include <QDebug>


class KeyCardsActuator : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int leftCardStatus READ leftCardStatus WRITE setLeftCardStatus NOTIFY leftCardStatusChanged)
    Q_PROPERTY(int rightCardStatus READ rightCardStatus WRITE setRightCardStatus NOTIFY rightCardStatusChanged)

public:
    explicit KeyCardsActuator(QSerialPort *serial, QObject *parent = nullptr);
    // explicit KeyCardsActuator(QSerialPort*);


    Q_INVOKABLE void approchLeftCard();
    Q_INVOKABLE void approchRightCard();
    void moveCorrectCard();


    int leftCardStatus() const;
    int rightCardStatus() const;

public slots:
    void setLeftCardStatus(int leftCardStatus);
    void setRightCardStatus(int rightCardStatus);
    void printRightCardStatusWhenChanged();

signals:
    void leftCardStatusChanged(int leftCardStatus);
    void rightCardStatusChanged(int rightCardStatus);
    void allCardMoveFinished();
    void leftCardFinishedMoving();
    void rightCardFinishedMoving();
    void ghost();

private slots:
    void handleReadyRead();

private:
    QString getCommand(QString &inputData);


    int m_leftCardStatus{0};
    int m_rightCardStatus{0};
    bool m_isLeftmoving{false};
    bool m_isRightmoving{false};
    QString m_buffer{""};
    bool m_isFullBuffer{false};
    QString m_nextData{""};
    QString m_data{""};
    QSerialPort *m_serial{nullptr};
};

#endif // KEYCARDSACTUATOR_H
