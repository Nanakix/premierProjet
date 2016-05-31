#include "mafenetre.h"

MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(300,150);

    // Construction du bouton
    m_bouton = new QPushButton("blabla", this);

    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("HLBM.png"));
    m_bouton->move(60,50);

}
