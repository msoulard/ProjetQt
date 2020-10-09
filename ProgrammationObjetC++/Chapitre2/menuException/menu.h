#ifndef MENU_H
#define MENU_H

#include<string>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

enum erreurs{
    CREATION,
    INDICE
};

class Menu{
private :
    string nom;
    string *options;
    int nbOptions;
    int longueurMax;
public:
    Menu(const string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

class ErreurCreation {
private:
    int codeErreur;
    string message;
public:
    ErreurCreation(int _codeErreur, string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;
};


#endif // MENU_H
