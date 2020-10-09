/**
  @file barreronde.cpp
  @details Définition et déclaration des fonctions de la classe BarreRonde
  @author Maëva Soulard
  @date 24/09/2020
  @version 1
*/

#include "barreronde.h"
#include <math.h>

/**
  @file barreronde.cpp
  @brief BarreRonde::BarreRonde
  @param _reference
  @param _longueur
  @param _densite
  @param _nom
  @param _diametre
  @details Constructeur de la fonction BarreRonde
 */
BarreRonde::BarreRonde(string _reference, float _longueur, float _densite, string _nom, float _diametre) :
    Barre(_reference, _longueur, _densite, _nom),
    diametre(_diametre)
{

}

/**
  @file barreronde.cpp
  @brief BarreRonde::~BarreRonde
  @details Destructeur de la classe BarreRonde
 */
BarreRonde::~BarreRonde()
{

}

/**
  @file barreronde.cpp
  @brief BarreRonde::CalculerSection
  @return section
  @details Fonction qui calcule la section de la barre
 */
float BarreRonde::CalculerSection()
{
    return M_PI * diametre * diametre / 4;
}

/**
  @file barreronde.cpp
  @brief BarreRonde::CalculerMasse
  @return masse
  @details Fonction qui calcule la masse de la barre en fonction de la longueur, de la section et de la densié
 */
float BarreRonde::CalculerMasse()
{
    return longueur * CalculerSection() * densite;
}
