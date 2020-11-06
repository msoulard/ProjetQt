#ifndef SEGMENT_H
#define SEGMENT_H

/**
  @file segment.h
 * @brief The Segment class
 * @details Déclartion de la classe Segment qui hérite de la classe Element
 * @author Maëva Soulard
 * @date 15/10/2020
 */

#include "element.h"
#include "vecteur.h"
#include <iostream>

using namespace std;

class Segment : public Element
{
public:
    Segment(const double _longueur, const double _angle, const int _vitesse);
    virtual void Afficher();
    virtual int ObtenirLongueur();
    virtual double ObtenirDuree();
    virtual Vecteur ObtenirVecteurArrive();
private :
    double longueur;
    double angle;
};

#endif // SEGMENT_H
