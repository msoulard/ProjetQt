#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction uneFraction(25, 15);
    Fraction frac2(12, 3);

    cout << "le numérateur : " << uneFraction.getNumerateur() << endl;
    cout << "le dénominateur : " << uneFraction.getDenominateur() << endl;
    Fraction somme = uneFraction + frac2;
    cout << "le numérateur : " << somme.getNumerateur() << endl;
    cout << "le dénominateur : " << somme.getDenominateur() << endl;


    return 0;
}
