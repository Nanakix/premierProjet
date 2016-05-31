#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QWidget>
#include <QApplication>
#include <QPushButton>

class MaFenetre : public QWidget
{

    public:
    MaFenetre();

    private:
    QPushButton *m_bouton;

};

#endif // MAFENETRE_H
