#include <iostream>
#include "fonctions.h"

using namespace std;

void AfficherTableau(float donnees[], int nbElements){
    int i;
    for (i = 0 ; i < nbElements ; i++) {
        cout << donnees[i] << " | ";
    }
    cout << endl;
}
