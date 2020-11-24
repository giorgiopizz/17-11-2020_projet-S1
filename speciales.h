#ifndef SPECIALES_H_INCLUDED
#define SPECIALES_H_INCLUDED
#include "carte.h"
#include "creature.h"
#include "attaque.h"
#include <iostream>
#include <vector>
#include <time.h>

class Speciale : public Carte
{
private :
    int m_cycleVie; // si = 0 => usage unique
    bool m_pioche; //si true, carte retourne dans la pioche/si false, carte va dans cimetiere


public :
    Speciale(int cycle, std::string nom, std::string description, bool pioche, int prix, int quantite,int identifiant);

    int getCycle()const;
    bool getBool()const;

    void setCycle(int cycle);
    void setBool(bool pioche);

    void afficher();
    void pouvoir();
    int cycleVie();
    std::vector<Carte> finDeVie(std::vector<Carte> deck, std::vector<Carte> cimetiere, int alerte);


};


//////////////////////
///Cartes speciales///
//////////////////////


class Spe1 : public Speciale{

public :
    Spe1();
    ~Spe1();

    Creature pouvoir(Creature crea_A, Attaque attaque); ////peut-etre de type template si besoin de retourner 1 carte

};



class Spe2 : public Speciale{
public :
    Spe2();
    ~Spe2();

    Carte pouvoir(std::vector <Carte> deck);
};



class Spe3 : public Speciale{
public :
    Spe3();
    ~Spe3();

    Carte pouvoir(std::vector<Carte> cimetiere);

};




class Spe4 : public Speciale{
public :
    Spe4();
    ~Spe4();

    Creature pouvoir(Creature creature);
};



class Spe5 : public Speciale{
public :
    Spe5();
    ~Spe5();

    void pouvoir(/*Parametres pour le pouvoir*/); //JSP si necessaire d'avoir cette methode pour immuniser

};



class Spe6 : public Speciale{
public :
    Spe6();
    ~Spe6();

    Carte pouvoir(std::vector<Carte> deck);

};



#endif // SPECIALES_H_INCLUDED
