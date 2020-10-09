#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //Entrées / Sorties : les fluxs
        //Ecriture sur la sortie standard
    /*
    cout << "Bienvenue en C++" << endl;
    */
        //Ecriture formatée
    /*
    bool sortie = true;
    int entier = 15;
    char car = 'a';
    cout << sortie << " " << entier << " " << car << endl;
    */
        //Lecture
    /*
    float temperature;
    float humidite;
    int pression;

    cout << "Saisire la température, l'humidité et la pression : ";
    cin >> temperature >> humidite >> pression;

    cout << "la température est de " << temperature << "°" << endl;
    cout << "le taux d'humidité est de " << humidite << "%" << endl;
    cout << "la pression est de "<< pression << " hPa" << endl;
    */
        //Lecture chaîne de caractères
    /*
    char phrase[80+1];
    cout << "Saisir une phrase : ";
    cin >> phrase;
    cout << "Votre phrase est : " << phrase << endl;
    */
        //Lecture chaîne de cazractères avec la prise en compte des espaces
    /*
    char phrases[80+1];
    cout << "Saisir une phrase : ";
    cin.getline(phrases,80);
    cout << "Votre phrase est : " << phrases << endl;
    */
    //Les manipulateurs de flux d'entrée-sortie
        //Exemple 1 de manipulateurs
    /*
    int val = 192;
    cout << "Affichage par défaut : " << val << endl;
    cout << "Affichage en héxadécimal : " << hex << val << endl;
    cout << "Affichage en décimal : " << dec << val << endl;
    */
        //Exemple 2 de manipulateurs
    /*
     int val1 = 192;
     float val2 = 3.141592654;
     bool sortie = true;
     cout << "Affichage par défaut : " << val1 << endl;
     cout << "Affichage een hexadécimal : " << hex << val1 << endl;
     cout << "Affichage en décimal : " << dec << val1 << endl;
     cout << hex << val1 << " " << uppercase << val1 << " ";
     cout << showbase << val1 << nouppercase << " " << val1 << endl;
     cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
     cout << "|" << setw(20) << left << "abc" << "|" << endl;
     cout << "|" << setw(20) << right << "abc" << "|" << endl;
     cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
     cout << dec << sortie << " " << boolalpha << sortie << endl;
     cout << val2 << " " << fixed << val2 << " " << scientific << val2 << " ";
     cout << fixed << setprecision(2) << val2 << endl;
     cout << "Entrez un nombre en octal : ";
     cin >> oct >> val1;
     cout << "Vous avez saisie : " << dec << val1 << " en décimal" << endl;
     */

    return 0;
}
