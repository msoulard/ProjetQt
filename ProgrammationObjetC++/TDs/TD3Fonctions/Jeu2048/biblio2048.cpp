#include <math.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include "biblio2048.h"

using namespace std;

void InitialiserAleatoire(){
   srand(time(nullptr));
}

int TirerAleatoire(){
    return(((rand()%2)+1)*2);
}

void AfficherGrille(){
    cout << "-" << setw(13) << endl;
}

void InitialiserGrille(){

}
