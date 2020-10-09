#include <iostream>
#include <iomanip>
#include "jeu2048.h"

using namespace std;

void AfficherGrille(Jeu2048& _lejeu){
    int _grille[4][4];
    _lejeu.ObtenirGrille(_grille);
    cout << "Score : " << _lejeu.ObtenirScore() << " | ";
    cout << "Nombre de coups : " << _lejeu.ObtenirNbCoups() << " |" << endl;
    for (int i = 0 ; i < 4 ; i++) {
        cout << "+" << setw(4) << setfill('-') << "+";
        cout << setw(4) << setfill('-') << "+";
        cout << setw(4) << setfill('-') << "+";
        cout << setw(4) << setfill('-') << "+" << endl;
        for (int y = 0 ; y < 4 ; y++) {
            if (_grille[i][y] != 0) {
                cout << "|" << setw(3) << setfill(' ') <<_grille[i][y];
            }
            else {
                cout << "|" << setw(3) << setfill(' ') << " ";
            }
        }
        cout << "|" << endl;
    }
    cout << "+" << setw(4) << setfill('-') << "+";
    cout << setw(4) << setfill('-') << "+";
    cout << setw(4) << setfill('-') << "+";
    cout << setw(4) << setfill('-') << "+" << endl;
    cout << "Votre déplacement : H (haut), B (bas), D (droite), G (gauche) : ";
}

int main()
{
    char _deplacement;
    Jeu2048 leJeu;
    AfficherGrille(leJeu);
    cin >> _deplacement;

    return 0;
}
