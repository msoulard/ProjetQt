#include <iostream>
#include <QtGlobal>
#include "code.h"

using namespace std;

#define TAILLE_CODE 4

int main()
{
    Code unCode(TAILLE_CODE);
    quint8 *leCode;
    bool verifier;

    leCode = new quint8(TAILLE_CODE);

    cout << "Donnez un nouveau code à 4 chiffre : " << endl;
    for(int i = 0 ; i < TAILLE_CODE ; i++){
        cin >> leCode[i];
    }
    unCode.Memoriser(leCode);
    cout << "Entrez le code :" << endl;
    for(int i = 0 ; i < TAILLE_CODE ; i++){
        cin >> leCode[i];
    }
    verifier = unCode.VerifierCode(leCode);
    if(verifier == false){
        cout << "Le code entré n'est pas le bon" << endl;
    }
    else{
        cout << "Le code entré est correct" << endl;
    }

    return 0;
}
