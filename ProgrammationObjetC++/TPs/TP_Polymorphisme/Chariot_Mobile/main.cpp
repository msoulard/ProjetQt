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
#include "arc.h"
#include "pause.h"

using namespace std;

int main()
{
    Trajectoire uneTrajectoire(10);
    Segment unSegment(9, 0, 3);
    bool possible;

    possible = uneTrajectoire.Ajouter(&unSegment);
    possible = uneTrajectoire.Ajouter(new Segment(5, 0.927295, 1));
    possible = uneTrajectoire.Ajouter(new Segment(6, 1.5708, 2));
    possible = uneTrajectoire.Ajouter(new Pause(4));
    possible = uneTrajectoire.Ajouter(new Arc(5, 3.14159, 0, 6));
    uneTrajectoire.Afficher();

    return 0;
}
