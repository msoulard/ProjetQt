#include "jeu2048.h"

Jeu2048::Jeu2048() : nbCoups(0), score(0){
    srand(time(nullptr));
    for (int i =0 ; i < 4 ; i++) {
        for (int y = 0 ; y < 4 ; y++) {
            grille[i][y] = 0;
        }
    }
    PlacerNouvelleTuile();
}

bool Jeu2048::JouerCoup(const char _direction)
{
    direction = _direction;
    Deplacer();
    if (Calculer()) {
        Deplacer();
    }
    CalculerScore();
    bool fin = RechercherFinDePartie();
    if (!fin) {
        PlacerNouvelleTuile();
    }
    return fin;
}

int Jeu2048::ObtenirNbCoups()
{
    return nbCoups;
}

int Jeu2048::ObtenirScore()
{
    return score;
}

void Jeu2048::ObtenirGrille(int _grille[][4])
{
    for (int i =0 ; i < 4 ; i++) {
        for (int y = 0 ; y < 4 ; y++) {
            _grille[i][y] = grille[i][y];
        }
    }
}

/**
 * @brief Jeu2048::TirerAleatoire
 * @details tire aléatoirement en fonction de la valeur du paramètre soit 2 ou 4 pour TUILE soit entre 0 et 3 pour POSITION
 * @param _mode
 * @return
 */
int Jeu2048::TirerAleatoire(const MODE_ALEATOIRE _mode)
{
    int retour;
    if (_mode == TUILE) {
        retour = ((rand()%2)+1)*2;
    }
    if (_mode == POSITION) {
        retour = rand()%4;
    }
    return retour;
}

void Jeu2048::PlacerNouvelleTuile(){
    int ligne;
    int colonne;
    do {
        ligne = TirerAleatoire(POSITION);
        colonne = TirerAleatoire(POSITION);
    } while (grille[ligne][colonne] != 0);
    grille[ligne][colonne] = TirerAleatoire(TUILE);
}

bool Jeu2048::Calculer(){
    bool calcul = false;
    switch (direction) {
    case 'G' :
        for (int i = 0 ; i < 4 ; i++) {
            for (int y = 0 ; y < 4 ; y++) {
                if (grille[i][y] == grille[i][y+1]) {
                    grille[i][y] = grille[i][y]*2;
                    grille[i][y+1] = 0;
                    calcul = true;
                }
            }
        }
        break;
    case 'D' :
        for (int i = 0 ; i < 4 ; i++) {
            for (int y = 0 ; y < 4 ; y++) {
                if (grille[i][y] == grille[i][y-1]) {
                    grille[i][y] = grille[i][y]*2;
                    grille[i][y-1] = 0;
                    calcul = true;
                }
            }
        }
        break;
    case 'B':
        for (int i = 0 ; i < 4 ; i++) {
            for (int y = 0 ; y < 4 ; y++) {
                if (grille[i][y] == grille[i-1][y]) {
                    grille[i][y] = grille[i][y]*2;
                    grille[i-1][y] = 0;
                    calcul = true;
                }
            }
        }
        break;
    case 'H':
        for (int i = 0 ; i < 4 ; i++) {
            for (int y = 0 ; y < 4 ; y++) {
                if (grille[i][y] == grille[i+1][y]) {
                    grille[i][y] = grille[i][y]*2;
                    grille[i+1][y] = 0;
                    calcul = true;
                }
            }
        }
        break;
    }
    return calcul;
}

void Jeu2048::Deplacer()
{
    for (int x = 0 ; x < 4 ; x++) {
        switch (direction) {
        case 'G' :
            for (int i = 0 ; i < 4 ; i++) {
                for (int y = 0 ; y < 3 ; y++) {
                    if (grille[i][y] == 0) {
                        grille[i][y] = grille[i][y+1];
                        grille[i][y+1] = 0;
                    }
                }
            }
            break;
        case 'D' :
            for (int i = 0 ; i < 4 ; i++) {
                for (int y = 2 ; y > 0 ; y--) {
                    if (grille[i][y] == 0) {
                        grille[i][y] = grille[i][y-1];
                        grille[i][y-1] = 0;
                    }
                }
            }
            break;
        case 'B':
            for (int i = 0 ; i < 4 ; i++) {
                for (int y = 2 ; y > 0 ; y--) {
                    if (grille[i][y] == 0) {
                        grille[i][y] = grille[i-1][y];
                        grille[i-1][y] = 0;
                    }
                }
            }
            break;
        case 'H':
            for (int i = 0 ; i < 4 ; i++) {
                for (int y = 0 ; y < 3 ; y++) {
                    if (grille[i][y] == 0) {
                        grille[i][y] = grille[i+1][y];
                        grille[i+1][y] = 0;
                    }
                }

            }
            break;
        }
    }
}

void Jeu2048::CalculerScore(){
    for (int i = 0 ; i < 4 ; i++) {
        for (int y = 0 ; y < 4 ; y++) {
            score = score + grille[i][y];
        }
    }
}

bool Jeu2048::RechercherFinDePartie()
{
    bool fin = false;
    int cpt = 0;
    for (int i = 0 ; i < 4 ; i++) {
        for (int y = 0 ; y < 4 ; y++) {
            if (grille[i][y] = 2048) {
                fin = true;
            }
            if (grille[i][y] == 0) {
                cpt = cpt + 1;
            }
        }
    }
    if (cpt == 0) {
        fin = true;
    }
    return fin;
}
