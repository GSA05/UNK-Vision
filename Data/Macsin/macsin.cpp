#include "macsin.h"

using namespace Data::Macsin;
using namespace Data::Macsin::Material;

quint8 Macsin::Macsin::getNGEO() const
{
    return NGEO;
}

void Macsin::Macsin::setNGEO(const quint8 &value)
{
    NGEO = value;
}

quint8 Macsin::Macsin::getNZON() const
{
    return NZON;
}

void Macsin::Macsin::setNZON(const quint8 &value)
{
    NZON = value;
}

quint8 Macsin::Macsin::getNGR() const
{
    return NGR;
}

void Macsin::Macsin::setNGR(const quint8 &value)
{
    NGR = value;
}

quint8 Macsin::Macsin::getNGRT() const
{
    return NGRT;
}

void Macsin::Macsin::setNGRT(const quint8 &value)
{
    NGRT = value;
}

quint8 Macsin::Macsin::getNMAT() const
{
    return NMAT;
}

void Macsin::Macsin::setNMAT(const quint8 &value)
{
    NMAT = value;
}

quint16 Macsin::Macsin::getNPRED() const
{
    return NPRED;
}

void Macsin::Macsin::setNPRED(const quint16 &value)
{
    NPRED = value;
}

qreal Macsin::Macsin::getAlbedo() const
{
    return albedo;
}

void Macsin::Macsin::setAlbedo(const qreal &value)
{
    albedo = value;
}

QVector<qreal> Macsin::Macsin::getRadiuses() const
{
    return radiuses;
}

void Macsin::Macsin::setRadiuses(const QVector<qreal> &value)
{
    radiuses = value;
}

QVector<quint16> Macsin::Macsin::getZones() const
{
    return zones;
}

void Macsin::Macsin::setZones(const QVector<quint16> &value)
{
    zones = value;
}

QVector<quint8> Macsin::Macsin::getOnes() const
{
    return ones;
}

void Macsin::Macsin::setOnes(const QVector<quint8> &value)
{
    ones = value;
}

QVector<Material::Material> Macsin::Macsin::getMaterials() const
{
    return materials;
}

void Macsin::Macsin::setMaterials(const QVector<Material::Material> &value)
{
    materials = value;
}

Macsin::Macsin::Macsin()
{

}

QString Material::Material::getName() const
{
    return name;
}

void Material::Material::setName(const QString &value)
{
    name = value;
}

quint8 Material::Material::getNIZOT() const
{
    return NIZOT;
}

void Material::Material::setNIZOT(const quint8 &value)
{
    NIZOT = value;
}

quint8 Material::Material::getNMODER() const
{
    return NMODER;
}

void Material::Material::setNMODER(const quint8 &value)
{
    NMODER = value;
}

QVector<quint16> Material::Material::getIsotopes() const
{
    return isotopes;
}

void Material::Material::setIsotopes(const QVector<quint16> &value)
{
    isotopes = value;
}

QVector<qreal> Material::Material::getConcentrations() const
{
    return concentrations;
}

void Material::Material::setConcentrations(const QVector<qreal> &value)
{
    concentrations = value;
}

QVector<quint8> Material::Material::getModels() const
{
    return models;
}

void Material::Material::setModels(const QVector<quint8> &value)
{
    models = value;
}

qreal Material::Material::getTemperature() const
{
    return temperature;
}

void Material::Material::setTemperature(const qreal &value)
{
    temperature = value;
}

QVector<QVector<quint8> > Material::Material::getMicrogroupes() const
{
    return microgroupes;
}

void Material::Material::setMicrogroupes(const QVector<QVector<quint8> > &value)
{
    microgroupes = value;
}
