#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // création d'une fenêtre
    QWidget fenetre;
    fenetre.setFixedSize(300,150);

    // création d'un bouton
    QPushButton bouton("Salut les Zéros, la forme ?", &fenetre);

    // personnalisation du bouton
    bouton.setText("HELLO MA FRRIEND ! cyka blyat");
    bouton.setToolTip("idi nahui blyat");

    QFont mahFont("Comic Sans MS");

    bouton.setFont(mahFont);
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("C:/Users/Jean/Documents/QtProjects/premierProjet/HLBM.png"));

    // Affichage
    fenetre.show();

    return app.exec();
}
