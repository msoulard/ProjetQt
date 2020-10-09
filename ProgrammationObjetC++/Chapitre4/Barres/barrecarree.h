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
  @date 07/10/2020
  @version 2
 */

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, float _longueur, float _densite, string _nom, float _cote);
    virtual ~BarreCarree();
    float CalculerSection();
    virtual float CalculerMasse();
    virtual void AfficherCaracteristiques();
private:
    float cote;
};

#endif // BARRECARREE_H
