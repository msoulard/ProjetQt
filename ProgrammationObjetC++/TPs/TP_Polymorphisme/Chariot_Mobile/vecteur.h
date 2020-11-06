#ifndef VECTEUR_H
#define VECTEUR_H

/**
  @file vecteur.h
 * @brief The Vecteur class
 * @details Déclartion de la classe Vecteur
 * @author Maëva Soulard
 * @date 15/10/2020
 */

#include <string.h>
#include <iostream>

using namespace std;

class Vecteur
{
public:
    Vecteur(const double _x, const double _y);
    Vecteur operator+(const Vecteur &_autre);
    Vecteur operator-(const Vecteur& _autre);
    void Afficher();

    double getX() const;
    void setX(double value);

    double getY() const;
    void setY(double value);

private :
    double x;
    double y;
};

#endif // VECTEUR_H
