#include "fraction.h"

Fraction::Fraction(const int _numerateur, const int _denominateur) : numerateur(_numerateur), denominateur(_denominateur)
{
    int pgdc = CalculerPcgd(numerateur, denominateur);
    numerateur = numerateur / pgdc;
    denominateur = denominateur / pgdc;
}

int Fraction::getNumerateur() const
{
    return numerateur;
}

int Fraction::getDenominateur() const
{
    return denominateur;
}

Fraction &Fraction::operator =(const Fraction &_autre){
    numerateur = _autre.numerateur;
    denominateur = _autre.denominateur;
    return *this;
}

Fraction Fraction::operator +(const Fraction &_b){
    int num = numerateur * _b.getDenominateur() + _b.getNumerateur() * denominateur;
    int den = denominateur + _b.getDenominateur();
    return Fraction(num, den);
}

int Fraction::CalculerPcgd(int _a, int _b)
{
    int min;
    if (_a < _b) {
        min = _a;
    }
    else {
        min = _b;
    }
    while (_a % min != 0 || _b % min != 0) {
        min --;
    }
    return min;
}
