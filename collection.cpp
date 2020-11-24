#include "collection.h"

//Constructeur
Collection ::Collection(){}

//Destructeur
Collection::~Collection(){}

//Accesseurs
std::vector<Carte*> Collection::getCollection()
{
    return m_cartes;
}

void Collection::setCollection(std::vector<Carte*> cartes)
{
    m_cartes=cartes;
}


//Pour afficher la collection notamment lors de la selection du deck
//pas de parametres, pas de retour
void Collection::afficher()
{
    //std::vector<Carte> collection = getCollection();
    //afficher liste
   /* for(const auto elem : collection){
        elem.afficher();
    }*/
}

//Est ce que methode necessaire ?
//Pour selectionner la collection de depart lorsque nouveau joueur
//La boutique du jeu estpassee en parametre
//Pas de retour
void Collection::selectionner(Boutique boutique)
{
    boutique.choisir();
}

//Pour ajouter une carte a la collection, quand on gagne l'enjeu par exemple
//Parametre: carte a ajouter
//Pas de retour
void Collection::ajouter(Carte nouvCarte)
{
    std::vector<Carte*> collection=getCollection();
    collection.push_back(&nouvCarte);
    setCollection(collection);
}


//Pour supprimer carte, lorsque perte de l'enjeu par exemple
//Parametre: Carte que l'on veut supprimer
//Pas de retour
void Collection::supprimer(Carte carteAsupp)
{
    std::vector<Carte*> collection = getCollection();
    int i=0;

    for(const auto elem : collection){
        //Si on retrouve la carte dans la collection
        if(elem->getIdentifiant() == carteAsupp.getIdentifiant()){
            collection.erase(collection.begin()+i); //on la supprime de la collection
        }
        i++;
    }

    setCollection(collection);
}
