#include <iostream>
#include "fonctions.h"

using namespace std;

int main(){
    const int NB_ACQUIS = 5;
    const int NB_MOYENNES = NB_ACQUIS - 3;
    float valeursBrutes[NB_ACQUIS];
    float valeursMoyennes[NB_MOYENNES];
    int i;
    float moyenne = 0;

    for (i = 0 ; i < NB_ACQUIS ; i++) {
        cout << "Donnez la valeur : ";
        cin >> valeursBrutes[i];
    }
    for (i = 0 ; i < NB_MOYENNES ; i++) {
        moyenne = (valeursBrutes[i] + valeursBrutes[i+1] + valeursBrutes[i+2])/3;
        valeursMoyennes[i]=moyenne;
    }
    AfficherTableau(valeursBrutes, NB_ACQUIS);
    AfficherTableau(valeursMoyennes, NB_MOYENNES);

    return 0;
}
