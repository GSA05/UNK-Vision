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

QVector<Macsin::Material> Macsin::getMaterials() const
{
    return materials;
}

void Macsin::setMaterials(const QVector<Macsin::Material> &value)
{
    materials = value;
}

Macsin::Macsin()
{

}

QString Macsin::Material::getName() const
{
    return name;
}

void Macsin::Material::setName(const QString &value)
{
    name = value;
}

quint8 Macsin::Material::getNIZOT() const
{
    return NIZOT;
}

void Macsin::Material::setNIZOT(const quint8 &value)
{
    NIZOT = value;
}

quint8 Macsin::Material::getNMODER() const
{
    return NMODER;
}

void Macsin::Material::setNMODER(const quint8 &value)
{
    NMODER = value;
}

QVector<quint16> Macsin::Material::getIsotopes() const
{
    return isotopes;
}

void Macsin::Material::setIsotopes(const QVector<quint16> &value)
{
    isotopes = value;
}

QVector<qreal> Macsin::Material::getConcentrations() const
{
    return concentrations;
}

void Macsin::Material::setConcentrations(const QVector<qreal> &value)
{
    concentrations = value;
}

QVector<quint8> Macsin::Material::getModels() const
{
    return models;
}

void Macsin::Material::setModels(const QVector<quint8> &value)
{
    models = value;
}

qreal Macsin::Material::getTemperature() const
{
    return temperature;
}

void Macsin::Material::setTemperature(const qreal &value)
{
    temperature = value;
}

QVector<QVector<quint8> > Macsin::Material::getMicrogroupes() const
{
    return microgroupes;
}

void Macsin::Material::setMicrogroupes(const QVector<QVector<quint8> > &value)
{
    microgroupes = value;
}
