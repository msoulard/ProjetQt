#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

using namespace std;

class Personne{
private:
    string nom;
    string prenom;
    int age;
public:
    Personne();
    Personne(const string _nom, const string _prenom, const int _age);

    int getAge() const;
    void setAge(int value);
    string getNom() const;
    void setNom(const string &value);
    string getPrenom() const;
    void setPrenom(const string &value);
};

#endif // PERSONNE_H
