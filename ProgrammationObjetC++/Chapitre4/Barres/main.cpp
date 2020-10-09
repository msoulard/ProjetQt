#include <iostream>
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "menu.h"
#include "catalogue.h"

using namespace std;

/**
  @file main.cpp
  @brief main
  @return 0
  @details Programme principal qui fait l'intanciation de chaque classe fille et qui affiche leurs caractéristiques et leur masse
  @author Maëva Soulard
  @date 07/10/2020
  @version 2
 */
int main()
{
    string reference;
    int longueur;
    float densite;
    float cote;
    float diamatre;
    string alliage;
    int choix;
    BarreCarree *uneBarreCarree;
    BarreRonde *uneBarreRonde;
    Catalogue unCatalogue(10);
    
    Menu unMenu("menu.txt");
    
    do{
        choix = unMenu.Afficher();
        switch (choix) {
        case 1 :
            cout << "Référence de la barre (type : carrée ou ronde + référence) : ";
            cin >> reference;
            cout << "Alliage de la barre : ";
            cin >> alliage;
            cout << "longueur en cm : ";
            cin >> longueur;
            cout << "Densité du métal en g/cm3 : ";
            cin >> densite;
            cout << "Côté du carré en cm : ";
            cin >> cote;
            uneBarreCarree = new BarreCarree(reference, longueur, densite, alliage, cote); // allocation dynamique
            unCatalogue.AjouterBarre(uneBarreCarree);
            break;
        case 2 :
            cout << "Référence de la barre (type : carrée ou ronde + référence) : ";
            cin >> reference;
            cout << "Alliage de la barre : ";
            cin >> alliage;
            cout << "longueur en cm : ";
            cin >> longueur;
            cout << "Densité du métal en g/cm3 : ";
            cin >> densite;
            cout << "Diamètre du cercle en cm : ";
            cin >> diamatre;
            uneBarreRonde = new BarreRonde(reference, longueur, densite, alliage, diamatre); // allocation dynamique
            unCatalogue.AjouterBarre(uneBarreRonde);
            break;
        case 3 :
            unCatalogue.AfficherCatalogue();
            break;
        }
    }while (choix != 4);

    return 0;
}
