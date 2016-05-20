#ifndef MACSIN_H
#define MACSIN_H

#include "Data/data.h"
#include <QVector>
#include <QString>

class Macsin : public Data
{
    class Material
    {
    //RECORD 1
        quint8 NIZOT;
        quint8 NMODER;

    //RECORD 2
        QVector<quint16> isotopes;

    //RECORD 3
        QVector<qreal> concentrations;

    //RECORD 4
        QVector<quint8> models;

    //RECORD 5
        qreal temperature;

    //RECORD 6
        QVector<QVector<quint8> > microgroupes;

        QString name;

    public:
        Material();
        quint8 getNIZOT() const;
        void setNIZOT(const quint8 &value);
        quint8 getNMODER() const;
        void setNMODER(const quint8 &value);
        QVector<quint16> getIsotopes() const;
        void setIsotopes(const QVector<quint16> &value);
        QVector<qreal> getConcentrations() const;
        void setConcentrations(const QVector<qreal> &value);
        QVector<quint8> getModels() const;
        void setModels(const QVector<quint8> &value);
        qreal getTemperature() const;
        void setTemperature(const qreal &value);
        QVector<QVector<quint8> > getMicrogroupes() const;
        void setMicrogroupes(const QVector<QVector<quint8> > &value);
        QString getName() const;
        void setName(const QString &value);
    };

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

//RECORD 6
    QVector<Material> materials;
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
    QVector<Material> getMaterials() const;
    void setMaterials(const QVector<Material> &value);
};

#endif // MACSIN_H
