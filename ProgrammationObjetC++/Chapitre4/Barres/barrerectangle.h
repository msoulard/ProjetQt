#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"
#include <string>

using namespace std;

/**
  @file barrerectangle.h
  @brief The BarreRectangle class
  @details Déclaration de la classe BarreRectangle qui hérite de la classe Barre
  @author Maëva Soulard
  @date 24/09/2020
 */

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _reference, float _longueur, float _densite, string _nom, float _hauteur, float _largeur);
    ~BarreRectangle();
    float CalculerSection();
    float CalculerMasse();
private:
    float hauteur;
    float largeur;
};

#endif // BARRERECTANGLE_H
