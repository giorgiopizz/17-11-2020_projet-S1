#ifndef BOUTIQUE_H_INCLUDED
#define BOUTIQUE_H_INCLUDED

#include "carte.h"
#include "energie.h"
#include "speciales.h"
#include "creature.h"

#include <iostream>
#include <vector>

class Boutique
{
private:
    std::vector <Carte> m_cartes; //Vecteur avec toutes les cartes
    std::vector <Carte> m_cartesU; //Vecteur qui contient liste des cartes sans doublons, pratique pour affichage


public :

    Boutique();
    ~Boutique();

    std::vector<Carte> getCartes();
    std::vector<Carte> getCartesU();

    void setCartes(std::vector<Carte> cartes);
    void setCartesU(std::vector<Carte> cartesU);



    void remplir(); //on cree la boutique
    void supprimerCarte(Carte achat); //Quand on vend carte
    void afficher();
    Carte choisir(); //acheter une carte

};


#endif // BOUTIQUE_H_INCLUDED
