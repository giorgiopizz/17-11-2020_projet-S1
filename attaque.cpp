
#include "attaque.h"
#include "carte.h"
#include <iostream>

Attaque::Attaque()
{}

Attaque::Attaque(std::string nom, std::string description, int coupPE, int typePE, int HP, bool possible)
:m_nom(nom), m_description(description), m_coupPE(coupPE), m_typePE(typePE), m_HP(HP), m_possible(possible)
{}

Attaque::~Attaque()
{}

int Attaque::getHp()const
{
    return m_HP;
}
int Attaque::getCoupPE()const
{
    return m_coupPE;
}
int Attaque::getType()const
{
    return m_typePE;
}
std::string Attaque::getNom()const
{
    return m_nom;
}
std::string Attaque::getDescription()const
{
    return m_description;
}
bool Attaque::getPos()const
{
    return m_possible;
}

void Attaque::setHp(int HP)
{
    m_HP=HP;
}
void Attaque::setCoupPE(int coupPE)
{
    m_coupPE=coupPE;
}
void Attaque::setType(int type)
{
    m_typePE=type;
}
void Attaque::setPos(bool pos)
{
    m_possible=pos;
}

void Attaque::afficher()
{
    std::cout<<getNom()<< ":"<<std::endl<<getDescription()<<std::endl<< "Elle coute "<< getCoupPE()<< " de type " << getType()<< std::endl<< "Elle fait un total de: " << getHp() << "HP"<<std::endl;
}

/*Creature Attaque::attaque(Creature creature)
{
    creature.setLP(creature.getLP()-getHP);
    return creature;
}*/
