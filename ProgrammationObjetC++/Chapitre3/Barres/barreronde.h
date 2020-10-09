#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"
#include <string>

using namespace std;

/**
  @file barreronde.h
  @brief The BarreRonde class
  @details Déclaration de la classe BarreRonde qui hérite de la classe Barre
  @author Maëva Soulard
  @date 24/09/2020
  @version 1
 */

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, float _longueur, float _densite, string _nom, float _diametre);
    ~BarreRonde();
    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
};

#endif // BARRERONDE_H
