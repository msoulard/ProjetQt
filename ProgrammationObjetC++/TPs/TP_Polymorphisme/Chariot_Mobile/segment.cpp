/**
  @file segment.cpp
  @details Définition et déclaration des fonctions de la classe Segment
  @author Maëva Soulard
  @date 15/10/2020
*/

#include "segment.h"
#include <math.h>

/**
 * @file segment.cpp
 * @brief Segment::Segment
 * @param _longueur
 * @param _angle
 * @details Constructeur de la classe Segment
 */
Segment::Segment(const double _longueur, const double _angle, const int _vitesse) :
    Element(_vitesse),
    longueur(_longueur),
    angle(_angle)
{
    
}

/**
 * @file segment.cpp
 * @brief Segment::Afficher
 * @details Fonction qui permet d'afficher les caractéristiques du segment
 */
void Segment::Afficher()
{
    cout << "(" << numero << ") " << "SEGMENT L = " << longueur << "     A = " << angle << "    V = " << vitesse << endl;

}

/**
 * @file segment.cpp
 * @brief Segment::ObtenirLongueur
 * @return
 * @details Fonction qui permet d'obtenir la longueur du segment
 */
int Segment::ObtenirLongueur()
{
    return longueur;
}

/**
 * @file segment.cpp
 * @brief Segment::ObtenirDuree
 * @return
 * @details Fonction qui permet d'obtenir la durée
 */
double Segment::ObtenirDuree()
{
    double duree;
    duree = longueur / vitesse;
    return duree;
}

/**
 * @file segment.cpp
 * @brief Segment::ObtenirVecteurArrive
 * @details Fonction qui permet d'obtenir le vecteur d'arrivée
 */
Vecteur Segment::ObtenirVecteurArrive()
{
    Vecteur vecteur(longueur * cos(angle), longueur * sin(angle));
    return vecteur;
}
