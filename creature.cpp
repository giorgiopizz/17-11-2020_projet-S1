#include "creature.h"

Creature::Creature()
{}
Creature::Creature(std::string nom, std::string description,int prix, int LP, int energie,int quantite,int identifiant)
:Carte(nom,description, prix, 2, quantite, identifiant), m_LP(LP), m_energie(energie)
{}


Creature::~Creature()
{}

int Creature::getLP()const
{
    return m_LP;
}

void Creature::setLP(int LP)
{
    m_LP=LP;
}

int Creature::getEnergie()const
{
    return m_energie;
}


void Creature::setEnergie(int energie)
{
    m_energie=energie;
}

/*std::vector<Attaque> Creature::getAttaque()
{
    return attaque;
}*/

std::vector <Attaque> Creature::getAttaque()
{
    return m_att;
}


void Creature :: ajouter(std::string nom, std::string des, int coup, int type, int HP, bool pos)
{
    //Creature attObjt(getNom(),getDescription(),getCoupPE(), getType(),getHP(),getPossible());
    Attaque att = Attaque(nom,des, coup, type, HP, pos);
    m_att.push_back(att);
}

void Creature::afficher()
{
    std::cout<<getNom()<< ":"<<std::endl<<getDescription()<<std::endl<< "Elle coute "<< getPrix()<< std::endl<< "Elle est de type energie: " << getEnergie()<< std::endl;
    std::cout<< "Ses attaques sont:"<< std::endl;
    /// cout lest 2 attaques
}

/*void Creature::GestionLP()
{

}*/
