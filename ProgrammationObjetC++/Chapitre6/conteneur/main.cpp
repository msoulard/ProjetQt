#include <iostream>
#include <array>
#include <list>

class Rouleau;

using namespace std;

int main()
{
    //déclaration d'un tableau d'entiers avec 10 cases
    array<int,10> tableau1;
    //déclaration d'un tableau de 3 caractères et son initialisation
    array<char,3> tableau2 = {'a','b','c'};
    //déclaration d'une liste de Rouleaux, classe déclarée par ailleurs
    list<Rouleau> listeDeRouleaux;
    return 0;
}
