#ifndef ARC_H
#define ARC_H

/**
  @file arc.h
 * @brief The Arc class
 * @details Déclartion de la classe Arc qui hérite de la classe Element
 * @author Maëva Soulard
 * @date 06/11/2020
 */
#include "element.h"
#include <math.h>

class Arc : public Element
{
public:
    Arc(const double _rayon, const double _angleDebut, const double _angleFin, const int _vitesse);
    virtual void Afficher();
    virtual int ObtenirLongueur();
    virtual double ObtenirDuree();
    virtual Vecteur ObtenirVecteurArrive();
private :
    double rayon;
    double angleDebut;
    double angleFin;
};

#endif // ARC_H
