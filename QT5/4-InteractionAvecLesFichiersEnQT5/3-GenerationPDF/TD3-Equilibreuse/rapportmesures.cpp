#include "rapportmesures.h"

RapportMesures::RapportMesures(Experience &_experience, QChartView &_graphique, const QString _nomDuFichier) :
    QPdfWriter(_nomDuFichier),
    graphique(_graphique),
    experience(_experience)
{
    setPageSize((QPageSize(QPageSize::A4)));
    setPageOrientation(QPageLayout::Portrait);
    setResolution(300);
    largeurPdf = QPdfWriter::width();
    hauteurPdf = QPdfWriter::height();
    qDebug() << largeurPdf << " " << hauteurPdf;
    largeurUtile = largeurPdf*0.9;
    margeGauche = largeurPdf*0.05;
    padding = resolution()*0.1;
    margeHaut = hauteurPdf*0.025;
    fontTitre.setFamily("Verdana");
    fontTitre.setWeight(12);
    fontTexte.setWeight(12);
}

void RapportMesures::ConstruireRapport()
{
    painter.begin(this);
    FabriquerEntete();
    FabriquerResultats(hauteurPdf*0.15);
    FabriquerGraphiques(hauteurPdf*0.35);
    FabriquerCommentaires(hauteurPdf*0.8);
    painter.end();
}

void RapportMesures::FabriquerEntete()
{
    int hauteurEntete = hauteurPdf * 0.1;
    painter.setFont(fontTitre);
    QRect entete(margeGauche,margeHaut,largeurUtile,hauteurEntete);
    QPen stylo;
    stylo.setWidth(3);
    painter.setPen(stylo);
    painter.drawRect(entete);
    stylo.setWidth(1);
    painter.setPen(stylo);
    entete.adjust(padding,padding,-padding,-padding);
    QString texte = experience.ObtenirPrenom() + " " + experience.ObtenirNom();
    painter.drawText(entete,Qt::AlignLeft|Qt::AlignTop,texte);
    painter.drawText(entete,Qt::AlignRight|Qt::AlignTop,experience.ObtenirClasse());
    painter.setFont(fontTitre);
    painter.drawText(entete,Qt::AlignHCenter|Qt::AlignCenter,"Rapport d'expérience d'équilibrage");
    painter.drawText(entete, Qt::AlignLeft|Qt::AlignBottom, experience.ObtenirEtablissement());
    painter.drawText(entete, Qt::AlignRight|Qt::AlignBottom, experience.ObtenirDate());
}

void RapportMesures::FabriquerResultats(int position)
{
    QString texteVitesse("Vitesse de l'expérience : ");
    texteVitesse += QString::number(experience.ObtenirVitesse()) + " trs/min";
    painter.setFont(fontTitre);
    painter.drawText(margeGauche,position,texteVitesse);
    int hauteurResultats = hauteurPdf * 0.15;
    QRect cellule(margeGauche,margeHaut,largeurUtile/5,hauteurResultats/3);
    cellule.moveTop(position+padding);
    int largeurCellule = cellule.width();
    int hauteurCellule = cellule.height();
    QStringList enteteTableau;
    enteteTableau << QString(" ") << QString("Effort Maxi") << QString("Déphasage");
    enteteTableau << QString("Effort à 0°") << QString("Effort à 90°");
    double resultats[2][4];
    resultats[0][0] = experience.RechercherEffortMax('A').y();
    resultats[0][1] = experience.RechercherEffortMax('A').x();
    resultats[0][2] = experience.RechercherEffortAzero('A');
    resultats[0][3] = experience.RechercherEffortAquatreVingtDix('A');
    resultats[1][0] = experience.RechercherEffortMax('O').y();
    resultats[1][1] = experience.RechercherEffortMax('O').x();
    resultats[1][2] = experience.RechercherEffortAzero('O');
    resultats[1][3] = experience.RechercherEffortAquatreVingtDix('O');
    for(int ligne = 0; ligne < 3 ; ligne++){
        for(int colonne = 0 ; colonne < 5; colonne++)
        {
            painter.setPen(QPen(Qt::black));
            painter.drawRect(cellule);
            if(ligne==0){
                // Titre du tableau
                painter.drawText(cellule, Qt::AlignCenter, enteteTableau.at(colonne));
            }
            else{
                painter.setFont(fontTexte);
                if(colonne != 0){
                    // contenu des cellules
                }
                else{
                    painter.setFont(fontTitre);
                    if(ligne==1){
                        painter.setPen(QPen(COULEUR_PALIER_A));
                        // Titre pour le Palier A
                        painter.drawText(cellule, Qt::AlignCenter, "Palier A");
                    }
                    else{
                        painter.setPen(QPen(COULEUR_PALIER_O));
                        // Titre pour le Palier O
                        painter.drawText(cellule, Qt::AlignCenter, "Palier O");
                    }
                }
            }
            cellule.translate(largeurCellule,0);
        }
        cellule.translate(-5*largeurCellule,hauteurCellule);
    }
}

void RapportMesures::FabriquerGraphiques(int position)
{
    int hauteurGraphique = hauteurPdf * 0.4;
    QRect emplacement(margeGauche,margeHaut,largeurUtile,hauteurGraphique);
    emplacement.moveTop(position);
    QPixmap pixMap = graphique.grab();
    painter.drawPixmap(emplacement,pixMap);
}

void RapportMesures::FabriquerCommentaires(int position)
{
    int hauteurCommentaire = hauteurPdf * 0.15;
    painter.setFont(fontTexte);
    QRect entete(margeGauche,margeHaut,largeurUtile,hauteurCommentaire);
    QPen stylo;
    stylo.setWidth(3);
    painter.setPen(stylo);
    painter.drawRect(entete);
    stylo.setWidth(1);
    painter.setPen(stylo);
    entete.adjust(padding,padding,-padding,-padding);
    painter.drawText(entete, position, experience.ObtenirCommentaire());
}
