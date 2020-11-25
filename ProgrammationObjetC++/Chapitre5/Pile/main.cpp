#include <iostream>
#include "pile.h"

using namespace std;

int main()
{
    cout << "Voici une pile d'entiers" << endl;
    Pile<int> pile1(5); //on précise que c'est une pile d'entiers
    for(int indice = 0 ; indice < 5 ; indice++){
        pile1.Empiler(indice);
    }
    for(int indice = 0 ; indice < 5 ; indice++){
        cout << pile1.Depiler() << endl;
    }
    cout << endl << "Voici une pile de caractères" << endl;
    Pile<char> pile2(5); //on précise que c'est une pile de caractères
    for(int indice = 0 ; indice < 5 ; indice++){
        pile2.Empiler('A'+static_cast<char>(indice));
    }
    for(int indice = 0 ; indice < 5 ; indice++){
        cout << pile2.Depiler() << endl;
    }
    return 0;
}
