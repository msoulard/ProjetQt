#include <iostream>
# include <iomanip>

using namespace std;

int main()
{
    const int NB_ELEVES = 5;
    int i;
    float notes[NB_ELEVES];
    int sup = 0;
    float moyenne = 0;
    float min = 0;
    float max = 0;

    //Saisir les notes des élèves
    for (i = 0 ; i < NB_ELEVES ; i++) {
        cout << "Saisir la note de l'élève " << i << " : ";
        cin >> notes[i];
    }
    //Afficher toutes les notes des élèves
    for (i = 0 ; i < NB_ELEVES ; i++) {
        cout << "L'élève numéro " << i << " a eu la note de ";
        cout << fixed << setprecision(1) << setw(4) << setfill('0');
        cout << notes[i] << "/20" << endl;
    }
    //Calcul du nombre de notes supérieures ou égales à 10
    for (i = 0 ; i < NB_ELEVES ; i++) {
        if(notes[i] >= 10){
            sup++;
        }
    }
    cout << "Il y a " << sup << " élèves qui ont une note supérieure ou égale à 10" << endl;
    //Calcul de la moyenne des notes de tous les élèves
    for (i = 0 ; i < NB_ELEVES ; i++) {
        moyenne = moyenne + notes[i];
    }
    moyenne = moyenne / NB_ELEVES;
    cout << "La moyenne de la classe est de " <<  fixed << setprecision(1) << moyenne << "/20" << endl;
    //Recherche de la note minimum et maximum
    min = notes[0];
    max = notes[0];
    for (i = 0 ; i < NB_ELEVES ; i++) {
        if (notes[i] <= min){
            min = notes[i];
        }
        if (notes[i] >= max) {
            max = notes[i];
        }
    }
    cout << "La note minimale est de " << fixed << setprecision(1) << min << "/20" << endl;
    cout << "La note maximale est de " << fixed << setprecision(1) << max << "/20" << endl;

    return 0;
}
