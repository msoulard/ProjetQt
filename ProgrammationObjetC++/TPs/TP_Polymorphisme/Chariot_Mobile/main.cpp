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

using namespace std;

int main()
{
    Trajectoire uneTrajectoire(10);
    Segment unSegment(2.5, 10);

    uneTrajectoire.Afficher();
    unSegment.Afficher();

    return 0;
}
