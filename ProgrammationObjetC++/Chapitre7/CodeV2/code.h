#ifndef CODE_H
#define CODE_H

#include <QObject>
#include <QVector>

class Code
{
public:
    Code(const int _tailleCode = 4);
    ~Code();
    bool VerifierCode(const QVector<quint8> _unCode);
    void Memoriser(const QVector<quint8> _unCode);
private :
    QVector<quint8> codeUsine;
    QVector<quint8> codeUtilisateur;
    const int tailleCode;
};

#endif // CODE_H
