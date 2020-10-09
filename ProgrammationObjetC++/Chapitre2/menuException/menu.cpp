#include "menu.h"

//constructeur du Menu
Menu::Menu(const string &_nom):nom(_nom), longueurMax(0){
    ifstream fichier("menu.txt");
    if (!fichier.is_open()){
        string erreur = "le fichier " + _nom + " n'existe pas";
        ErreurCreation excep(CREATION,erreur);
        throw (excep);
        nbOptions = 0;
    }
    else {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichier),istreambuf_iterator<char>(),'\n'));
        if (nbOptions == 0) {
            string erreur = "le fichier " + _nom + " est vide";
            ErreurCreation excep(CREATION,erreur);
            throw (excep);
        }
        else{
            fichier.seekg(0,ios::beg);
            options = new string [nbOptions];
            for (int i = 0 ; i < nbOptions ; i++) {
                getline(fichier, options[i]);
                if (options[i].length() > static_cast<unsigned long>(longueurMax)) {
                    longueurMax = options[i].length();
                }
            }
        }
    }
}

//destructeur du Menu
Menu::~Menu(){
    delete[] options;
}

int Menu::Afficher(){
    int choix = 0;
    //affichage pour le premier choix
    cout << "+" << setw(5) << setfill('-')<< "+" << setw(longueurMax+2) << "+"<< endl;
    for (int i = 0 ; i < nbOptions ; i++) {
        cout << "|" << setw(3) << setfill(' ') << i+1 << " |" << setw(longueurMax+1)<< options[i] << "|" << endl;
    }
    cout << "+" << setw(5) << setfill('-') << "+" << setw(longueurMax+2) << "+"<< endl;
    cout << "Votre choix svp : ";
    //vide le tampon et lie la valeur
    if(!(cin >> choix)){
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        choix=-1;
    }
    //si le choix est incorrect
    if (choix > nbOptions || choix < 1) {
        system("clear"); //effacer l'écran
        cout << "+" << setw(5) << setfill('-') << "+" << setw(longueurMax+2) << "+"<< endl;
        for (int i = 0 ; i < nbOptions ; i++) {
            cout << "|" << setw(3) << setfill(' ') << i+1 << " | " << setw(longueurMax+1)<< options[i] << "|" << endl;
        }
        cout << "+" << setw(5) << setfill('-') << "+" << setw(longueurMax+2) << "+"<< endl;
        //demander le choix tant qu'il est incorrect
        do {
            cout << "Entrez une nombre compris entre 1 et " << nbOptions << " svp : ";
            //vide le tampon et lie la valeur
            if(!(cin >> choix)){
                cin.clear();
                cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
                choix=-1;
            }
        } while (choix < 1 || choix > nbOptions);
    }

    return choix;
}

void Menu::AttendreAppuiTouche(){
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    system("clear");
}

ErreurCreation::ErreurCreation(int _codeErreur, string _message):codeErreur(_codeErreur),message(_message) {
}

int ErreurCreation::ObtenirCodeErreur() const {
    return codeErreur;
}

string ErreurCreation::ObtenirDescription() const{
    return message;
}
