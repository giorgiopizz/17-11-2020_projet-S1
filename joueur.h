#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "carte.h"
#include "collection.h"

class Joueur
{
public:
    Joueur();
    Joueur(std::string nom);
    Joueur(std::string nom, int cagnotte=100);
    ~Joueur();

    std::string getNom()const;
    void setNom(std::string nom){};

    void recupDeck();
    std::vector<Carte*> recupListe();

private:
    std::string m_nom;
    //Deck m_deck;
    int m_cagnotte;
    int m_LP;
    Collection m_collection;
};

#endif // JOUEUR_H_INCLUDED
