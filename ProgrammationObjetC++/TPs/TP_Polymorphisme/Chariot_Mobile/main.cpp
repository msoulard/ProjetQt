/**
  @file main.cpp
  @details Programme principal
  @author Maëva Soulard
  @date 15/10/2020
*/

#include <iostream>
#include "element.h"
#include "segment.h"
#include "trajectoire.h"
#include "vecteur.h"

using namespace std;

int main()
{
    Trajectoire uneTrajectoire(10);
    Segment unSegment(9, 0, 3);
    bool possible;

    possible = uneTrajectoire.Ajouter(&unSegment);
    possible = uneTrajectoire.Ajouter(new Segment(5, 0.927295, 1));
    possible = uneTrajectoire.Ajouter(new Segment(6, 1.5708, 2));
    uneTrajectoire.Afficher();


    return 0;
}
