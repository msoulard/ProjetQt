/**
  @file element.cpp
  @details Définition et déclaration des fonctions de la classe Element
  @author Maëva Soulard
  @date 15/10/2020
*/

#include "element.h"

/**
 * @file element.cpp
 * @brief Element::Element
 * @details Constructeur de la classe Element
 */
Element::Element(const int _vitesse) :
    vitesse(_vitesse),
    numero(0)
{

}

/**
 * @file element.cpp
 * @brief Element::~Element
 * @details Destructeur virtuel de la classe Element
 */
Element::~Element()
{

}

/**
 * @file element.cpp
 * @brief Element::getNumero
 * @return
 * @details Méthode qui permet de récupérer le numero
 */
int Element::getNumero() const
{
    return numero;
}

/**
 * @file element.cpp
 * @brief Element::setNumero
 * @param value
 * @details Méthode qui permet de changer le valeur du numero
 */
void Element::setNumero(int value)
{
    numero = value;
}

/**
 * @file element.cpp
 * @brief Element::getVitesse
 * @return
 * @details Méthode qui permet de récupérer la vitesse
 */
int Element::getVitesse() const
{
    return vitesse;
}

/**
 * @file element.cpp
 * @brief Element::setVitesse
 * @param value
 * @details Méthode qui permet de changer la valeur de la vitesse
 */
void Element::setVitesse(int value)
{
    vitesse = value;
}
