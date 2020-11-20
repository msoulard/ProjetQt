#include <iostream>
#include "code.h"

using namespace std;

Code::Code(const int _tailleCode) :
    tailleCode(_tailleCode)
{
    codeUsine = new quint8[tailleCode];
    codeUtilisateur = new quint8[tailleCode];
    for(int i = 0 ; i < tailleCode ; i++){
        codeUsine[i] = i+1;
        codeUtilisateur[i] = 0;
    }
}

Code::~Code()
{
    delete [] codeUsine;
    delete [] codeUtilisateur;
}

bool Code::VerifierCode(const quint8 *_unCode)
{
    bool ok = false;
    int compteurUsine = 0;
    int compteurUtilisateur = 0;
    for(int i = 0 ; i < tailleCode ; i++){
        if(_unCode[i] == codeUsine[i]){
            compteurUsine ++;
        }
    }
    for(int i = 0 ; i < tailleCode ; i++){
        if(_unCode[i] == codeUtilisateur[i]){
            compteurUtilisateur ++;
        }
    }
    if(compteurUsine == 4 || compteurUtilisateur == 4){
        ok = true;
    }
    else{
        ok = false;
    }
    return ok;
}

void Code::Memoriser(const quint8 *_unCode)
{
    for(int i = 0 ; i < tailleCode ; i++){
        codeUtilisateur[i] = _unCode[i];
        cout << codeUtilisateur[i];
    }
    cout << endl;
}