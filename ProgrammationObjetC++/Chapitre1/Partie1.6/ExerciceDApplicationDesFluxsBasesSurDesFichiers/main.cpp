#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomDuFichier;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;

    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); //c_str() transforme string en char*

    if (!leFichier.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    }
    else {
        //Création du flux en écriture
        ofstream leFichierTest("test.txt");
        if (!leFichierTest.is_open()) {
            cerr << "Erreur lors de l'ouverture du fichier" << endl;
        }
        else {
            string pays;
            int nbOr;
            int nbArgent;
            int nbBronze;

            //affichage de la première ligne du tableau sur le terminal
            cout << "+" << setfill('-') << setw(20) << "+";
            cout << setfill('-') << setw(11) << "+";
            cout << setfill('-') << setw(11) <<"+";
            cout << setfill('-') << setw(11) <<"+" << endl;
            //affichage de la première ligne du tableau sur le fichier texte
            leFichierTest << "+" << setfill('-') << setw(20) << "+";
            leFichierTest << setfill('-') << setw(11) << "+";
            leFichierTest << setfill('-') << setw(11) <<"+";
            leFichierTest << setfill('-') << setw(11) <<"+" << endl;
            do {
                //récupération des valeurs
                leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
                if (leFichier.good()) { //si les valeurs ont bien été lues
                    //affichage de chaque ligne du tableau sur le terminal
                    cout << "| " << left << setw(17) << setfill(' ') << pays ;
                    cout << " | " << right << setw(8) << nbOr;
                    cout << " | " << right << setw(8) << nbArgent;
                    cout << " | " << right << setw(8) << nbBronze << " |" << endl;
                    //affichage de chaque ligne du tableau sur le fichier texte
                    leFichierTest << "| " << left << setw(17) << setfill(' ') << pays ;
                    leFichierTest << " | " << right << setw(8) << nbOr;
                    leFichierTest << " | " << right << setw(8) << nbArgent;
                    leFichierTest << " | " << right << setw(8) << nbBronze << " |" << endl;
                }
            } while (!leFichier.eof());

            //affichafe de la dernière ligne du tableau
            cout << "+" << setfill('-') << setw(20) << "+";
            cout << setfill('-') << setw(11) << "+";
            cout << setfill('-') << setw(11) <<"+";
            cout << setfill('-') << setw(11) <<"+" << setfill(' ') << endl;
            //affichage de la dernière ligne du tableau sur le fichier texte
            leFichierTest << "+" << setfill('-') << setw(20) << "+";
            leFichierTest << setfill('-') << setw(11) << "+";
            leFichierTest << setfill('-') << setw(11) <<"+";
            leFichierTest << setfill('-') << setw(11) <<"+" << endl;
            leFichierTest.close();
        }

    }

    return 0;
}
