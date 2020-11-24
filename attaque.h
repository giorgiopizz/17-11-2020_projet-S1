#ifndef ATTAQUE_H_INCLUDED
#define ATTAQUE_H_INCLUDED
#include <iostream>
//#include "creature.h"
#include "carte.h"

class Attaque
{
private:
    std::string m_nom;
    std::string m_description;
    int m_coupPE;
    int m_typePE;
    int m_HP;
    bool m_possible;
public:
    Attaque();
    Attaque(std::string nom, std::string description, int coupPE, int typePE, int HP, bool possible);
    ~Attaque();

    int getHp()const;
    int getCoupPE()const;
    int getType()const;
    std::string getNom()const;
    std::string getDescription()const;
    bool getPos()const;

    void setHp(int HP);
    void setCoupPE(int coupPE);
    void setType(int type);
    void setPos(bool pos);

    //void possible();
    //Creature attaque(Creature creature);
    void afficher();
};

#endif // ATTAQUE_H_INCLUDED








