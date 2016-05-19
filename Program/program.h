#ifndef PROGRAM_H
#define PROGRAM_H

#include <QProcess>
#include <QDir>

class Program: public QProcess
{
    QDir path;
public:
    Program();
};

#endif // PROGRAM_H
