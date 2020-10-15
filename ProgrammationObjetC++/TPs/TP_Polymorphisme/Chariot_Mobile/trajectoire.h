#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H

/**
  @file trajectoire.h
 * @brief The Trajectoire class
 * @details Déclartion de la classe Trajectoire avec un pointeur de tableau sur le classe Element
 * @author Maëva Soulard
 * @date 15/10/2020
 */

#include "element.h"

class Trajectoire
{
public:
    Trajectoire(const int _nbEtapesMax);
    ~Trajectoire();
    bool Ajouter(const Element *_pElement);
    void Afficher();
private:
    int nbEtapesMax;
    int prochaineEtape;
    Element **parcours;
};

#endif // TRAJECTOIRE_H
