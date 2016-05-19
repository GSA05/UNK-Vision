#include "macsin.h"

quint8 Macsin::getNGEO() const
{
    return NGEO;
}

void Macsin::setNGEO(const quint8 &value)
{
    NGEO = value;
}

quint8 Macsin::getNZON() const
{
    return NZON;
}

void Macsin::setNZON(const quint8 &value)
{
    NZON = value;
}

quint8 Macsin::getNGR() const
{
    return NGR;
}

void Macsin::setNGR(const quint8 &value)
{
    NGR = value;
}

quint8 Macsin::getNGRT() const
{
    return NGRT;
}

void Macsin::setNGRT(const quint8 &value)
{
    NGRT = value;
}

quint8 Macsin::getNMAT() const
{
    return NMAT;
}

void Macsin::setNMAT(const quint8 &value)
{
    NMAT = value;
}

quint16 Macsin::getNPRED() const
{
    return NPRED;
}

void Macsin::setNPRED(const quint16 &value)
{
    NPRED = value;
}

qreal Macsin::getAlbedo() const
{
    return albedo;
}

void Macsin::setAlbedo(const qreal &value)
{
    albedo = value;
}

QVector<qreal> Macsin::getRadiuses() const
{
    return radiuses;
}

void Macsin::setRadiuses(const QVector<qreal> &value)
{
    radiuses = value;
}

QVector<quint16> Macsin::getZones() const
{
    return zones;
}

void Macsin::setZones(const QVector<quint16> &value)
{
    zones = value;
}

QVector<quint8> Macsin::getOnes() const
{
    return ones;
}

void Macsin::setOnes(const QVector<quint8> &value)
{
    ones = value;
}

Macsin::Macsin()
{

}
