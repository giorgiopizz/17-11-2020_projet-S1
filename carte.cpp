#include "carte.h"

Carte::Carte(std::string nom,std::string description, int prix, int genre, int quantite, int identifiant)
:m_nom(nom), m_description(description), m_prix(prix), m_genre(genre),m_quantite(quantite),m_identifiant(identifiant)
{}

Carte::Carte(int identifiant):m_identifiant(identifiant){}

Carte::Carte():m_nom("test"), m_description("Je teste mon code..."), m_prix(0)
{}

Carte::~Carte()
{}

//Surcharge operateur comparaison pour comparer des cartes
//Parametres : references sur les deux objets compares
//retour : booleen permettant de savoir si les deux objets sont egaux
bool operator==(Carte const& a, Carte const& b){
    //Pas forcement besoin de rajouter prix et quantite
    if(a.getDescription()== b.getDescription() && a.getGenre()==b.getGenre() && a.getNom()==b.getNom()) {
        return true;
    }

    else {
        return false;
    }
}


std::string Carte::getNom()const
{
    return m_nom;
}


std::string Carte::getDescription()const
{
    return m_description;
}

int Carte::getPrix()const
{
    return m_prix;
}

int Carte::getGenre()const
{
    return m_genre;
}

int Carte::getQuantite()const{
    return m_quantite;
}

int Carte::getIdentifiant() const
{
    return m_identifiant;
}

void Carte::setQuantite(int quantite){
    m_quantite=quantite;
}

void Carte::setIdentifiant(int identifiant){
    m_identifiant=identifiant;
}


