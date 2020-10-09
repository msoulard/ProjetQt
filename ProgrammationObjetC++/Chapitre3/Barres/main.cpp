#include <iostream>
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

/**
  @file main.cpp
  @brief main
  @return 0
  @details Programme principal qui fait l'intanciation de chaque classe fille et qui affiche leurs caractéristiques et leur masse
  @author Maëva Soulard
  @date 24/09/2020
 */
int main()
{
    BarreRonde laBarreRonde("2ad5f", 50, 3, "ronde", 0.6);
    BarreCarree laBarreCarree("9gy6k", 9, 1, "carree", 0.05);
    BarreRectangle laBarreRectangle("4ne2qs", 10, 4, "rectangle", 0.36, 0.8);

    laBarreRonde.AfficherCaracteristiques();
    cout << "masse : " << laBarreRonde.CalculerMasse() << "cm3" << endl << endl;
    laBarreCarree.AfficherCaracteristiques();
    cout << "masse : " << laBarreCarree.CalculerMasse() << "cm3" << endl << endl;
    laBarreRectangle.AfficherCaracteristiques();
    cout << "masse : " << laBarreRectangle.CalculerMasse() << "cm3" << endl << endl;

    return 0;
}
