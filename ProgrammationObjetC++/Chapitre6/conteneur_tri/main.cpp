#include<iostream>
#include<iomanip>
#include<array>
#include<algorithm>

using namespace std;

void AfficherValeur(int val);

int main(){
    array<int,10> tableau1={15,8,25,2,9,0,12,38,10,3};
    cout << "Tableau d'origine:";
    for_each(tableau1.begin(), tableau1.end(), AfficherValeur);
    cout << endl;

    cout << "Tableau trié:";
    sort(tableau1.begin(), tableau1.end());
    for_each(tableau1.begin(), tableau1.end(),AfficherValeur);
    cout << endl;

    return 0;
}

void AfficherValeur(int val){
    cout << setw(5) << val;
}
