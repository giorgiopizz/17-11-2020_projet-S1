#include "Cimetiere.h"

//Constructeur
Cimetiere::Cimetiere(){

}

//Destructeur
Cimetiere::~Cimetiere(){

}

//Accesseurs

void Cimetiere::setCimetiere(std::vector<Carte*> cartes){
    m_cartes=cartes;
}

std::vector<Carte*> Cimetiere::getCimetiere(){
    return m_cartes;
}

//Affichage
void Cimetiere::afficher(){
    //Afficher derniere carte du cimetiere sur le terrain
    /*int i;
    std::vector <Carte> cimetiere = getCimetiere();
    for(const auto elem : cimetiere){
        if(i==cimetiere.size()) elem.affichage();
    }*/

}

//On ajoute la derniere carte morte au cimetiere
//parametre : carte morte
//pas de retour
void Cimetiere::ajouter(Carte deadCard){
    std::vector <Carte*> cimetiere = getCimetiere();
    cimetiere.push_back(&deadCard);
    setCimetiere(cimetiere);
}
