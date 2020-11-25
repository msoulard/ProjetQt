#include <vector>
#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
        //conteneur de type vector
    //déclaration d'un tableau d’entiers dynamique avec 10 cases de réservées
    vector<int> tableau(10);
    for(int indice = 0 ; indice < 10 ; indice++){
        tableau[static_cast<size_t>(indice)] = indice;
    }
    //déclaration d'un itérateur sur le tableau
    vector<int>::iterator it;
    for(it = tableau.begin() ; it != tableau.end() ; it++){
        cout << *it << " ";
    }
    cout << endl;

        //conteneur de type map
    map<string,string> telephones;
    telephones ["Jean"] = "0123456789";
    telephones ["Paul"] = "0678912345";
    telephones ["Pierre"] = "0789123456";
    telephones ["Sophie"] = "0456789123";

    map<string,string>::iterator its;
    for(its = telephones.begin() ; its != telephones.end() ; its++){
        cout << setw(7) << left << its->first << "-> " << its->second << endl;
    }

    return 0;
}
