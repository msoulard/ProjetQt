/**
  @file barre.cpp
  @details Définition et déclaration des fonctions de la classe Barre
  @author Maëva Soulard
  @date 07/10/2020
  @version 2
*/

#include "barre.h"

/**
  @file barre.cpp
  @brief Barre::Barre
  @details Constructeur de la classe Barre
  @param _reference
  @param _longueur
  @param _densite
  @param _nom
 */
Barre::Barre(string _reference, float _longueur, float _densite, string _nom) :
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nom(_nom)
{
    cout << "Appel du constructeur de Barre" << endl;
}

/**
  @file barre.cpp
  @brief Barre::~Barre
  @details Destructeur de la classe Barre
 */
Barre::~Barre()
{
    cout << "Appel du destructeur de Barre" << endl;
}
