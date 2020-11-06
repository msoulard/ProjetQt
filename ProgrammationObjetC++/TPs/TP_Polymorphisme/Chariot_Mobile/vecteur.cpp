/**
  @file vecteur.cpp
  @details Définition et déclaration des fonctions de la classe Vecteur
  @author Maëva Soulard
  @date 15/10/2020
*/

#include "vecteur.h"

/**
 * @file vecteur.cpp
 * @brief Vecteur::Vecteur
 * @param _x
 * @param _y
 * @details Constructeur de la classe Vecteur
 */
Vecteur::Vecteur(const double _x, const double _y) :
    x(_x),
    y(_y)
{

}

/**
 * @file vecteur.cpp
 * @brief Vecteur::operator +
 * @param _autre
 * @return
 * @details Fonction qui permet d'additionner 2 vecteurs
 */
Vecteur Vecteur::operator+(const Vecteur &_autre)
{
    setX(getX()+_autre.getX());
    setY(getY()+_autre.getY());
    return *this;
}

/**
 * @file vecteur.cpp
 * @brief Vecteur::operator -
 * @param _autre
 * @return
 * @details Fonction qui permet de soustraire 2 vecteurs
 */
Vecteur Vecteur::operator-(const Vecteur &_autre)
{
    setX(getX()-_autre.getX());
    setY(getY()-_autre.getY());
    return *this;
}

/**
 * @file vecteur.cpp
 * @brief Vecteur::Afficher
 * @details Fonction qui affiche les caractéristiques du vecteur
 */
void Vecteur::Afficher()
{
    cout << "Vecteur en (" << x << ", " << y << ")" << endl;
}

/**
 * @file vecteur.cpp
 * @brief Vecteur::getX
 * @return
 * @details Fonction qui permet de récupérer la valeur x du vecteur
 */
double Vecteur::getX() const
{
    return x;
}

/**
 * @file vecteur.cpp
 * @brief Vecteur::setX
 * @param value
 * @details Fonction qui permet de changer la valeur x du vecteur
 */
void Vecteur::setX(double value)
{
    x = value;
}

/**
 * @file vecteur.cpp
 * @brief Vecteur::getY
 * @return
 *
 * @details Fonction qui permet de récupérer la valeur y du vecteur
 */
double Vecteur::getY() const
{
    return y;
}

/**
 * @file vecteur.cpp
 * @brief Vecteur::setY
 * @param value
 * @details Fonction qui permet de changer la valeur y du vecteur
 */
void Vecteur::setY(double value)
{
    y = value;
}
