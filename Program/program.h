#ifndef PROGRAM_H
#define PROGRAM_H

#include <QProcess>
#include <QDir>

namespace Program {

    class Program: public QProcess
    {
        QDir path;
    public:
        Program();
    };

}

#endif // PROGRAM_H
