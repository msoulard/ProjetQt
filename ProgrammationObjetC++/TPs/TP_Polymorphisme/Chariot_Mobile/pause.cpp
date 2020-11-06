/**
  @file pause.cpp
  @details Définition et déclaration des fonctions de la classe Pause
  @author Maëva Soulard
  @date 06/11/2020
*/

#include "pause.h"

/**
 * @file pause.cpp
 * @brief Pause::Pause
 * @param _tempsAttente
 * @details Constructeur de la classe Pause
 */
Pause::Pause(const int _tempsAttente) :
    tempsAttente(_tempsAttente)
{

}

/**
 * @file pause.cpp
 * @brief Pause::Afficher
 * @details Méthode qui permet d'afficher les caractéristiques de la classe
 */
void Pause::Afficher()
{
    cout << "(" << numero << ") Pause D = " << tempsAttente << endl;
}

/**
 * @file pause.cpp
 * @brief Pause::ObtenirLongueur
 * @return
 * @details Méthode qui permet d'obtenir la longueur
 */
int Pause::ObtenirLongueur()
{
    return 0;
}

/**
 * @file pause.cpp
 * @brief Pause::ObtenirDuree
 * @return
 * @details Méthode qui permet d'obtenir la durée
 */
double Pause::ObtenirDuree()
{
    return tempsAttente;
}

/**
 * @file pause.cpp
 * @brief Pause::ObtenirVecteurArrive
 * @return
 * @details Méthode qui permet d'obtenir la vecteur d'arrivé
 */
Vecteur Pause::ObtenirVecteurArrive()
{
    Vecteur vecteur(0,0);
    return vecteur;
}
