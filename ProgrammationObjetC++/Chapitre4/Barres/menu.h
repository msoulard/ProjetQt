#ifndef MENU_H
#define MENU_H

#include<string>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iomanip>


using namespace std;

/**
  @file menu.h
  @brief The Menu class
  @details Déclaration de la classe Menu
  @author Maëva Soulard
  @date 07/10/2020
  @version 2
 */

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


#endif // MENU_H
