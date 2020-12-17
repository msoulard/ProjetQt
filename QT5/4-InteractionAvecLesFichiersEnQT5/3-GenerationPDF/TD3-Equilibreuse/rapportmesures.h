#ifndef RAPPORTMESURES_H
#define RAPPORTMESURES_H

#include <QPdfWriter>
#include <QPainter>
#include <QtCharts>
#include "experience.h"

class RapportMesures : public QPdfWriter
{
public:
    RapportMesures(Experience &_experience, QChartView &_graphique, const QString _nomDuFichier);
    void ConstruireRapport();
private:
    int largeurPdf;
    int hauteurPdf;
    int margeGauche;
    int margeHaut;
    int largeurUtile;
    int padding;
    QFont fontTitre;
    QFont fontTexte;
    QPainter painter;
    QChartView &graphique;
    Experience &experience;

    void FabriquerEntete();
    void FabriquerResultats(int position);
    void FabriquerGraphiques(int position);
    void FabriquerCommentaires(int position);
};

#endif // RAPPORTMESURES_H
