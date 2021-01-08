import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.15
import "fonctions.js" as FonctionsOperations

Window {
    //@disable-check M16
    visible: true
    //@disable-check M16
    width: 640
    //@disable-check M16
    height: 480
    //@disable-check M16
    title: qsTr("Calculatrice")

    GridLayout {
        //@disable-check M16
        anchors.fill: parent
        rows: 5
        columns: 4

        TextField {

            id: textFieldOperations
            Layout.bottomMargin: 5
            Layout.rightMargin: 5
            Layout.leftMargin: 5
            Layout.topMargin: 5
            Layout.fillWidth: true
            Layout.columnSpan: 4
            Layout.column: 0
            Layout.row: 0
            horizontalAlignment: Text.AlignRight
            placeholderText: qsTr("Affichage des opérations")
        }

        Button {
            id: button7
            width: 50
            text: qsTr("7")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.leftMargin: 5
            Layout.topMargin: 5
            Layout.column: 0
            Layout.row: 1

            onClicked: {
                FonctionsOperations.operation(7);
            }
        }

        Button {
            id: button8
            text: qsTr("8")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 1
            Layout.row: 1
            onClicked: {
                FonctionsOperations.operation(8);
            }
        }

        Button {
            id: button9
            text: qsTr("9")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 2
            Layout.row: 1
            onClicked: {
                FonctionsOperations.operation(9);
            }
        }

        Button {
            id: buttonAddition
            text: qsTr("+")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 3
            Layout.row: 1
            onClicked: {
                FonctionsOperations.operation("+");
            }
        }

        Button {
            id: button4
            text: qsTr("4")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 0
            Layout.row: 2
            onClicked: {
                FonctionsOperations.operation(4);
            }
        }

        Button {
            id: button5
            text: qsTr("5")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 1
            Layout.row: 2
            onClicked: {
                FonctionsOperations.operation(5);
            }
        }

        Button {
            id: button6
            text: qsTr("6")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 2
            Layout.row: 2
            onClicked: {
                FonctionsOperations.operation(6);
            }
        }

        Button {
            id: buttonSoustraction
            text: qsTr("-")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 3
            Layout.row: 2
            onClicked: {
                FonctionsOperations.operation("-");
            }
        }

        Button {
            id: button1
            text: qsTr("1")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 0
            Layout.row: 3
            onClicked: {
                FonctionsOperations.operation(1);
            }
        }

        Button {
            id: button2
            text: qsTr("2")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 1
            Layout.row: 3
            onClicked: {
                FonctionsOperations.operation(2);
            }
        }

        Button {
            id: button3
            text: qsTr("3")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 2
            Layout.row: 3
            onClicked: {
                FonctionsOperations.operation(3);
            }
        }

        Button {
            id: buttonMultiplication
            text: qsTr("*")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 3
            Layout.row: 3
            onClicked: {
                FonctionsOperations.operation("*");
            }
        }

        Button {
            id: buttonCorrection
            text: qsTr("C")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 0
            Layout.row: 4
            onClicked: {
                FonctionsOperations.operation("C");
            }
        }

        Button {
            id: button0
            text: qsTr("0")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 1
            Layout.row: 4
            onClicked: {
                FonctionsOperations.operation(0);
            }
        }

        Button {
            id: buttonResultat
            text: qsTr("=")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 2
            Layout.row: 4
            onClicked: {
                FonctionsOperations.operation("=");
            }
        }

        Button {
            id: buttonDivision
            text: qsTr("/")
            Layout.maximumHeight: 50
            Layout.maximumWidth: 50
            Layout.leftMargin: 5
            Layout.rightMargin: 5
            Layout.bottomMargin: 5
            Layout.topMargin: 5
            Layout.column: 3
            Layout.row: 4
            onClicked: {
                FonctionsOperations.operation("/");
            }
        }
    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.5}
}
##^##*/
