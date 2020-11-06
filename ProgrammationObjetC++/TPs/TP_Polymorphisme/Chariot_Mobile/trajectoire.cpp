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
    nbEtapesMax(_nbEtapesMax),
    prochaineEtape(0),
    depart(5,10)
{
    parcours = new Element* [nbEtapesMax];
}

/**
 * @file trajectoire.cpp
 * @brief Trajectoire::~Trajectoire
 * @details Destructeur de la classe Tajectoire
 */
Trajectoire::~Trajectoire()
{
    delete [] parcours;
}

/**
 * @file trajectoire.cpp
 * @brief Trajectoire::Ajouter
 * @param _pElement
 * @return
 * @file Fonction qui permet d'ajouter un élément à la trajectoire
 */
bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = false;
    if(prochaineEtape < nbEtapesMax){
        _pElement->setNumero(prochaineEtape+1);
        parcours[prochaineEtape++] = _pElement;
        retour = true;
    }
    return retour;
}

/**
 * @file trajectoire.cpp
 * @brief Trajectoire::Afficher
 * @details Fonction qui permet d'afficher les caractéristiques de la trajectoire
 */
void Trajectoire::Afficher()
{
    Vecteur vecteurArrive(0,0);
    vecteurArrive = depart;
    double duree = 0;
    int longueurTotale = 0;
    cout << "Trajectoire :" << endl << endl;
    for(int i = 0 ; i < prochaineEtape ; i++){
        parcours[i]->Afficher();
        //parcours[i]->ObtenirVecteurArrive().Afficher();
        (vecteurArrive = vecteurArrive + parcours[i]->ObtenirVecteurArrive()).Afficher();
        duree = duree + parcours[i]->ObtenirDuree();
        longueurTotale = longueurTotale + parcours[i]->ObtenirLongueur();        
    }
    cout << endl;
    cout << "Durée totale du parcours = " << duree << endl;
    cout << "Longueur totale du parcours = " << longueurTotale << endl;
    cout << endl;
    cout << "Vecteur de départ = (" << depart.getX() << "," << depart.getY() << ")" << endl;
    cout << "Vecteur d'arrivé = (" << vecteurArrive.getX() << ", " << vecteurArrive.getY() << ")" << endl;
}
