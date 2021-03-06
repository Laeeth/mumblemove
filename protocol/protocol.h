#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <QDataStream>
#include <QPoint>
#include <QString>

const int PORT = 49079;

struct ClientInfo {
    quint64 id;
    QString name;
    // QColor is a QT GUI class
    quint32 color;
    QPointF position;
    bool remove;
};

QDataStream &operator>>(QDataStream &stream, ClientInfo &info);
QDataStream &operator<<(QDataStream &stream, const ClientInfo &info);

#endif // PROTOCOL_H
