/**
  @file catalogue.cpp
  @details Définition et déclaration des fonctions de la classe Catalogue
  @author Maëva Soulard
  @date 07/10/2020
  @version 1
*/

#include <iostream>
#include "catalogue.h"

using namespace std;

/**
  @file catalogue.cpp
 * @brief Catalogue::Catalogue
 * @param _nbBarres
 * @details Construteur de la classe Catalogue
 */
Catalogue::Catalogue(const int _nbBarres):
    nbBarres(_nbBarres)
{
    lesBarres = new Barre *[nbBarres];
    index = 0;
}

/**
  @file catalogue.cpp
 * @brief Catalogue::~Catalogue
 * @details Destructeur de la classe Cataloque
 */
Catalogue::~Catalogue()
{
    delete[] lesBarres;
}

/**
  @file catalogue.cpp
 * @brief Catalogue::AjouterBarre
 * @param ptrBarre
 * @return
 * @details Focntion qui permet d'ajouter une barre dans le catalogue
 */
bool Catalogue::AjouterBarre(Barre *ptrBarre)
{
    bool retour = true;
    if (index < nbBarres)
        lesBarres[index++] = ptrBarre ;
    else
        retour = false;
    return retour;
}

/**
  @file catalogue.cpp
 * @brief Catalogue::AfficherCatalogue
 * @details Fonction qui affiche le catalogue
 */
void Catalogue::AfficherCatalogue()
{
    for (int indice = 0; indice < index ; indice++)
    {
        lesBarres[indice]->AfficherCaracteristiques();
        cout << lesBarres[indice]->CalculerMasse() << endl;
        //erreur de compilation pour cette dernière ligne
    }
}
