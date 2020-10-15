/**
  @file trajectoire.cpp
  @details Définition et déclaration des fonctions de la classe Trajectoire
  @author Maëva Soulard
  @date 15/10/2020
*/

#include "trajectoire.h"

/**
 * @file trajectoire.cpp
 * @brief Trajectoire::Trajectoire
 * @param _nbEtapesMax
 * @details Constructeur de la classe Trajectoire avec l'allocation dynamique du tableau de pointeur parcours
 */
Trajectoire::Trajectoire(const int _nbEtapesMax) :
    nbEtapesMax(_nbEtapesMax)
{
    parcours = new Element* [nbEtapesMax];
}
