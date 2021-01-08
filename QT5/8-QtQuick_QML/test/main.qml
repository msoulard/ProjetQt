import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.3
import "fonctions.js" as FonctionsCouleur

Window {
    //@disable-check M16
    visible: true
    //@disable-check M16
    width: 640
    //@disable-check M16
    height: 480
    //@disable-check M16
    title: qsTr("Ma fenêtre")

    Rectangle {
        id: rectangle
        width: 200
        height: 100
        color: "red"

        Text {
            anchors.centerIn: parent
            text: "Hello world !"
        }
    }

    Button {
        id: button
        x: 197
        y: 144
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        text: qsTr("Changer Couleur")
        onClicked: {
            FonctionsCouleur.changerCouleurRectangle();
        }
    }

    Dial {
        id: dial
        width: 72
        height: 72
        focusPolicy: Qt.ClickFocus
        clip: true
        stepSize: 0.01
        to: 300

        property string couleurCercle: "red"
        x: 121
        y: 166

        RoundButton {
            id: roundButton
            opacity: 0.6
            anchors.fill: parent
            background: Rectangle{
                radius: roundButton.radius
                color: dial.couleurCercle
            }
        }
    }
    Button {
        id: changeCouleur
        text: "Changer cercle en vert"
        onClicked: dial.couleurCercle = "green"
        anchors.bottom: parent.bottom
        anchors.left: parent.left
    }

//    GridLayout {
//        id: gridLayout
//        rows: 5
//        columns: 4

//        Rectangle {
//            id: afficheur
//            Layout.row: 0
//            Layout.column: 0
//            Layout.columnSpan: 4
//            Layout.rowSpan: 1
//            color:  "green"
//        }
//    }
}
