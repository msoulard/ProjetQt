#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int NB_RELEVE = 5;
    unsigned short nuagePoints[NB_RELEVE];
    float moyenne = 0;
    int i;
    unsigned short min;
    unsigned short max;

    //Saisie des valeurs
    for (i = 0 ; i < NB_RELEVE ; i++) {
        do {
            cout << "Donnez la " << i+1 << " valeurs : ";
            cin >> nuagePoints[i];
        } while (nuagePoints[i] < 0);
    }
    min = nuagePoints[0];
    max = nuagePoints[0];
    //Recherche du minimum et du maximum
    for (i = 0 ; i < NB_RELEVE ; i++) {
        if (min > nuagePoints[i]) {
            min = nuagePoints[i];
        }
        if(max < nuagePoints[i]){
            max = nuagePoints[i];
        }
    }
    //Calcul de la moyenne
    for (i = 0 ; i < NB_RELEVE ; i++) {
        moyenne = moyenne + nuagePoints[i];
    }
    moyenne = (moyenne - min - max) / (NB_RELEVE - 2);
    cout << "Votre moyenne est de " << setprecision(2) << moyenne << endl;

    return 0;
}
