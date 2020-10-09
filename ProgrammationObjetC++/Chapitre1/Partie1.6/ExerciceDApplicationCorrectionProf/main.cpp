#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string inputFile;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> inputFile;

    ifstream leFichier(inputFile.c_str()); //Creation du flux en lecture sur le fichier
    if (!leFichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;

    else
    {
            string pays;
            int nbOr;
            int nbArgent;
            int nbBronze;

            //affichage de la premiere ligne du tableau
            cout << setfill('-');
            cout << "+" << setw(18) << "+" << setw(9) << "+" << setw(9) << "+" << setw(9) << "+" << endl;
            cout << setfill(' ');

            do
            {
                leFichier >> pays >> nbOr >> nbArgent >> nbBronze; //recuperation des valeurs
                if (leFichier.good())//Si les valeurs ont bien été lues
                {
                    //affichage des lignes du tableau
                    cout << "| " << left << setw(16) << pays << "|" << right << setw(7) << nbOr << " |" ;
                    cout << setw(7) << nbArgent << " |" << setw(7) << nbBronze << " |" << endl;
                }
            } while (!leFichier.eof());
            //Affichage du bas du tableau.
            cout << setfill('-');
            cout << "+" << setw(18) << "+" << setw(9) << "+" << setw(9) << "+" << setw(9) << "+" << endl;

        leFichier.close();
    }
    return 0;
}
