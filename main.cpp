#include <QApplication>
#include "mafenetre.h"

// on peut inclure QWidgets pour tous les modules GUI, mais ralentit la compilation

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre fenetre;

    // Affichage
    fenetre.show();

    return app.exec();
}
