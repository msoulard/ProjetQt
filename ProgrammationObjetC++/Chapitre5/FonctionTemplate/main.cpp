#include <iostream>

using namespace std;

template<typename T> //déclaration du type générique T
T RechercherPlusPetit(const T &a,const T &b){
    T retour;
    if(a<b){
        retour=a;
    }
    else{
        retour=b;
    }
    return retour;
}

template<typename T>
T CalculerMoyenne(T tab[],int nbElements){
    T somme = 0;
    for(int indice = 0 ; indice < nbElements ; indice++){
        somme += tab[indice];
    }
    return somme / nbElements;
}

template<typename T,typename R>
R CalculerMoyenneV2(T tab[],int nbElements){
    R somme = 0;
    for(int indice = 0 ; indice<nbElements ; indice++){
        somme += tab[indice];
    }
    return somme/static_cast<int>(nbElements);
}

int main(){
    double densiteAl(2.7);
    double densiteCu(8.9);
    cout << RechercherPlusPetit<double>(densiteCu,densiteAl) << endl;

    int parking(-1);
    int terrasse(5);
    cout << RechercherPlusPetit<int>(parking,terrasse) << endl;

    double temperature[5] = {12.5,25.2,14.4,18.3,20.1};
    int note[5]={11,10,13,15,14};
    cout << CalculerMoyenne<double>(temperature,5) << endl;
    cout << CalculerMoyenne<int>(note,5) << endl;

    int val[5]={11,10,13,15,14};
    cout << CalculerMoyenneV2<int, double>(val, 5) << endl;

    return 0;
}
