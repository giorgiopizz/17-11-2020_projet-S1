#ifndef COLLECTION_H_INCLUDED
#define COLLECTION_H_INCLUDED
#include <iostream>
#include <vector>
#include "carte.h"
#include "boutique.h"

class Collection
{
private:
    std::vector<Carte*> m_cartes;

public :
    Collection();
    ~Collection();

    std::vector <Carte*> getCollection();
    void setCollection(std::vector<Carte*> collection);

    void afficher(); //lors du choix du deck
    void selectionner(Boutique boutique); //Lorsque nouveau joueur

    //Lorsque achat d'une carte
    //Lorsque gain de l'enjeu
    void ajouter(Carte nouvCarte); //peut etre utiliser cette methode dans la classe achat de la boutique

    //Lorsque perte de l'enjeu
    void supprimer(Carte carteAsupp);

};


#endif // COLLECTION_H_INCLUDED
