#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED
#include <vector>
#include "carte.h"

class Deck
{
private:
    const int m_taille = 2;
    std::vector <Carte*> m_cartesD; //Vecteur qui contient les cartes qui composent le deck
    std::vector <Carte*> m_cartesDU; //Vecteur qui contient liste des cartes sans doublons, pratique pour affichage
public:

    Deck();
    ~Deck();

    int getTaille() const;
    std::vector <Carte *> getCartesD() const;
    std::vector<Carte *> getCartesDU() const;

    void setCartesD(std::vector<Carte*> cartesD);
    void setCartesDU(std::vector<Carte*> cartesDU);

    void remplirDeck(std::vector <Carte* > &collection);
    void supprimer(Carte carteAsupp);
    void ajouter(Carte nouvCarte);

    void afficherDeck();
};

#endif // DECK_H_INCLUDED
