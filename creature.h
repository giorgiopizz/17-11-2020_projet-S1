#ifndef CREATURE_H_INCLUDED
#define CREATURE_H_INCLUDED
#include <vector>
#include "carte.h"
#include "attaque.h"
#include <iostream>
#include <vector>


class Creature: public Carte
{
private:
    int m_LP;
    int m_energie;
    std::vector <Attaque> m_att;

public:
    Creature();
    Creature(std::string nom, std::string description,int prix, int LP, int energie,int quantite,int identifiant);
    ~Creature();

    int getLP()const;
    void setLP(int LP);

    int getEnergie()const;
    void setEnergie(int energie);

    std::vector <Attaque> getAttaque();

    void afficher();

    //void setAttaque(std::vector <Attaque*> attaque);
    ///attaque.push_back(new Attaque(nom,description,coupPE,typePE,HP,possible));
    //Attaque GestionLP(Attaque );

    // std::vector<Attaque> //finDeVie(std::vector<Carte> deck, std::vector<Carte> cimetiere, int alerte);
    void ajouter(std::string nom, std::string des, int coup, int type, int HP, int pos);
    //std::vector<Carte> finDeVie(std::vector<Carte> deck, std::vector<Carte> cimetiere, int alerte);
};

#endif // CREATURE_H_INCLUDED
