#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // création d'une fenêtre
    QWidget fenetre;
    fenetre.setFixedSize(300,150);

    QPushButton bouton("Salut les Zéros, la forme ?");
    bouton.setText("HELLO MA FRRIEND ! cyka blyat");
    bouton.setToolTip("idi nahui blyat");
    QFont mahFont("Comic Sans MS");
    bouton.setFont(mahFont);
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("C:/Users/Jean/Documents/QtProjects/premierProjet/HLBM.png"));
    bouton.show();

    return app.exec();
}
