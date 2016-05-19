#ifndef MACSIN_H
#define MACSIN_H

#include "Data/data.h"

class Macsin : public Data
{
//RECORD 1
    quint8 NGEO;
    quint8 NZON;
    quint8 NGR;
    quint8 NGRT;
    quint8 NMAT;
    quint16 NPRED;

//RECORD 2
    qreal albedo = 1;

//RECORD 3
    QVector<qreal> radiuses;

//RECORD 4
    QVector<quint16> zones;

//RECORD 5
    QVector<quint8> ones;
public:
    Macsin();
    quint8 getNGEO() const;
    void setNGEO(const quint8 &value);
    quint8 getNZON() const;
    void setNZON(const quint8 &value);
    quint8 getNGR() const;
    void setNGR(const quint8 &value);
    quint8 getNGRT() const;
    void setNGRT(const quint8 &value);
    quint8 getNMAT() const;
    void setNMAT(const quint8 &value);
    quint16 getNPRED() const;
    void setNPRED(const quint16 &value);
    qreal getAlbedo() const;
    void setAlbedo(const qreal &value);
    QVector<qreal> getRadiuses() const;
    void setRadiuses(const QVector<qreal> &value);
    QVector<quint16> getZones() const;
    void setZones(const QVector<quint16> &value);
    QVector<quint8> getOnes() const;
    void setOnes(const QVector<quint8> &value);
};

#endif // MACSIN_H
