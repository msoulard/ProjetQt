#ifndef JEU2048_H
/**
  @file jeu2048.h
  @brief déclaration de la classe Jeu2048
 */
#define JEU2048_H

#include <math.h>
#include <time.h>
#include <iomanip>

enum MODE_ALEATOIRE{
    POSITION,
    TUILE
};

class Jeu2048{
private :
    ///grille du jeu
    int grille[4][4];
    char direction;
    int nbCoups;
    int score;
public:
    Jeu2048();
    bool JouerCoup(const char _direction);
    int ObtenirNbCoups();
    int ObtenirScore();
    void ObtenirGrille(int _grille[][4]);
private:
    int TirerAleatoire(const MODE_ALEATOIRE _mode);
    void PlacerNouvelleTuile();
    bool Calculer();
    void Deplacer();
    void CalculerScore();
    bool RechercherFinDePartie();
};

#endif // JEU2048_H
