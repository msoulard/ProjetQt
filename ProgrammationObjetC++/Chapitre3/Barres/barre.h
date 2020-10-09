#ifndef BARRE_H
#define BARRE_H

#include <string>
#include <iostream>

using namespace std;

/**
  @file barre.h
  @brief The Barre class
  @details Déclaration de la classe mère Barre
  @author Maëva Soulard
  @date 24/09/2020
  @version 1
 */

class Barre
{
public:
    Barre(string _reference, float _longueur, float _densite, string _nom);
    ~Barre();
    void AfficherCaracteristiques();
protected :
    string reference;
    float longueur;
    float densite;
    string nom;
};

#endif // BARRE_H
