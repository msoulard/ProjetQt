#ifndef PAUSE_H
#define PAUSE_H

/**
 * @file pause.h
 * @brief The Pause class
 * @details Déclaration de la classe Pause qui hérite de la classe Element
 * @author Maëva Soulard
 * @date 06/11/2020
 */

#include "element.h"

class Pause : public Element
{
public:
    Pause(const int _tempsAttente);
    virtual void Afficher();
    virtual int ObtenirLongueur();
    virtual double ObtenirDuree();
    virtual Vecteur ObtenirVecteurArrive();
private :
    int tempsAttente;
};

#endif // PAUSE_H
