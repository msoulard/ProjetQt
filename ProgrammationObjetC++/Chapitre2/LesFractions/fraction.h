#ifndef FRACTION_H
#define FRACTION_H


class Fraction{
public:
    Fraction(const int _numerateur, const int _denominateur);
    int getNumerateur() const;
    int getDenominateur() const;
    Fraction &operator = (const Fraction &_autre);
    Fraction operator + (const Fraction &_b);
private:
    int numerateur;
    int denominateur;
    int CalculerPcgd(int _a, int _b);
};

#endif // FRACTION_H
