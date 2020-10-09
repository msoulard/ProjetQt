#ifndef MESURES_H
#define MESURES_H


class Mesures{
private:
    int nbMesures;
    float *valeurs;
public:
    Mesures(float *valeurs, int _nbMesures);
    ~Mesures();
    Mesures();
    Mesures(const Mesures& _mesures);
    Mesures &operator = (const Mesures& _mesures);

    float ObtenirMoyenne();
};

#endif // MESURES_H
