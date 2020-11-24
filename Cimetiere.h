#ifndef CIMETIERE_H_INCLUDED
#define CIMETIERE_H_INCLUDED

#include <iostream>
#include <vector>
#include "carte.h"

class Cimetiere{
private :
    std::vector<Carte> m_cartes;

public :
    Cimetiere();
    ~Cimetiere();

    void setCimetiere(std::vector<Carte> cartes);
    std::vector <Carte> getCimetiere();

    void ajouter(Carte deadCard);
    void afficher();

};


#endif // CIMETIERE_H_INCLUDED
