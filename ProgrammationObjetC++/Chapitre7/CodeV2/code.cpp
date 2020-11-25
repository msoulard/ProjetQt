#include <iostream>
#include "code.h"

using namespace std;

Code::Code(const int _tailleCode) :
    tailleCode(_tailleCode)
{
    for(int i = 0 ; i < tailleCode ; i++){
        codeUsine[i] = i+1;
        codeUtilisateur[i] = 0;
    }
}

Code::~Code()
{

}

bool Code::VerifierCode(const QVector<quint8> _unCode)
{
    bool ok = false;
    if(_unCode == codeUsine || _unCode == codeUtilisateur){
        ok = true;
    }
    else{
        ok = false;
    }
    return ok;
}

void Code::Memoriser(const QVector<quint8> _unCode)
{
    codeUtilisateur = _unCode;
    cout << endl;
}
