/**
  @file segment.cpp
  @details Définition et déclaration des fonctions de la classe Segment
  @author Maëva Soulard
  @date 15/10/2020
*/

#include "segment.h"

/**
 * @file segment.cpp
 * @brief Segment::Segment
 * @param _longueur
 * @param _angle
 * @details Constructeur de la classe Segment
 */
Segment::Segment(const double _longueur, const double _angle) :
    longueur(_longueur),
    angle(_angle)
{
    
}

/**
 * @file segment.cpp
 * @brief Segment::Afficher
 * @details Fonction qui permet d'afficher 
 */
void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur << "  A = " << angle << endl;
}
