#include <iostream>
#include "carton.h"
#include "caissedebouteilles.h"

using namespace std;

int main()
{
    Carton carton(10, 15, 6, 2.5);
    CaisseDeBouteilles laCaisseDeBouteilles(5, 10, 3, 15, 33);

    cout << "le volume dans les bouteilles est de " << laCaisseDeBouteilles.CalculerVolume() <<"cl" << endl;
    cout << "les bouteilles sont dans un contenant de " << static_cast<Contenant>(laCaisseDeBouteilles).CalculerVolume() <<"cm3"<< endl;

    return 0;
}
