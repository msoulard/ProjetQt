/**
  @file arc.cpp
  @details Définition et déclaration des fonctions de la classe Arc
  @author Maëva Soulard
  @date 06/11/2020
*/

#include "arc.h"

/**
 * @file arc.cpp
 * @brief Arc::Arc
 * @param _rayon
 * @param _angleDebut
 * @param _angleFin
 * @param _vitesse
 * @details Constructeur de la classe Arc
 */
Arc::Arc(const double _rayon, const double _angleDebut, const double _angleFin, const int _vitesse) :
    Element(_vitesse),
    rayon(_rayon),
    angleDebut(_angleDebut),
    angleFin(_angleFin)
{

}

/**
 * @file segment.cpp
 * @brief Arc::Afficher
 * @details Méthode qui permet d'afficher les caractéristiques de l'arc
 */
void Arc::Afficher()
{
    cout << "(" << numero << ") " << "ARC R = " << rayon << "     Angle début = " << angleDebut << "     Angle fin = " << angleFin << "    V = " << vitesse << endl;
}

/**
 * @file arc.cpp
 * @brief Arc::ObtenirLongueur
 * @return
 * @details Méthode qui permet de calculer la longueur de l'arc
 */
int Arc::ObtenirLongueur()
{
    int longueur;
    longueur = fabs(angleDebut - angleFin) * rayon;
    return longueur;
}

/**
 * @file arc.cpp
 * @brief Arc::ObtenirDuree
 * @return
 * @details Méthode qui permet de calculer la durée du l'arc
 */
double Arc::ObtenirDuree()
{
    double duree;
    duree = ObtenirLongueur() / vitesse;
    return duree;
}

/**
 * @file arc.cpp
 * @brief Arc::ObtenirVecteurArrive
 * @return
 * @details Méthode qui permet d'obtenir le vecteur d'arrivé
 */
Vecteur Arc::ObtenirVecteurArrive()
{
    Vecteur ptCentre(rayon * cos(angleDebut),rayon * sin(angleDebut));
    Vecteur ptArrivee(rayon * cos(angleFin),rayon * sin(angleFin));
    return (ptArrivee - ptCentre) ;
}
