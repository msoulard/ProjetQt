#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"
#include <string>

using namespace std;

/**
  @file barrecarree.h
  @brief The BarreCarree class
  @details Déclaration de la classe BarreCarree qui hérite de la classe Barre
  @author Maëva Soulard
  @date 24/09/2020
  @version 1
 */

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, float _longueur, float _densite, string _nom, float _cote);
    ~BarreCarree();
    float CalculerSection();
    float CalculerMasse();
private:
    float cote;
};

#endif // BARRECARREE_H
