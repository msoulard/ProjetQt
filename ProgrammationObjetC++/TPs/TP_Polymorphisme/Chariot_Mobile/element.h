#ifndef ELEMENT_H
#define ELEMENT_H

/**
  @file element.h
 * @brief The Element class
 * @details Déclartion de la classe de base et classe abstraite Element
 * @author Maëva Soulard
 * @date 15/10/2020
 */

#include "vecteur.h"

class Element
{
public:
    Element(const int _vitesse = 1);
    virtual ~Element();
    virtual void Afficher() = 0;
    virtual int ObtenirLongueur() = 0;
    virtual double ObtenirDuree() = 0;
    virtual Vecteur ObtenirVecteurArrive() = 0;

    int getNumero() const;
    void setNumero(int value);

    int getVitesse() const;
    void setVitesse(int value);

protected:
    int numero;
    int vitesse;
};

#endif // ELEMENT_H
