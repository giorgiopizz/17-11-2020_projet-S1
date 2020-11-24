#include "energie.h"

Energie::Energie()
{

}


Energie::Energie(std::string nom,std::string description,int prix,int gain, int couleur ,std::string domaine,int quantite, int identifiant)
        :Carte(nom,description,prix,2,quantite,identifiant),m_gain(gain), m_couleur(couleur),m_domaine(domaine)
{

}

Energie::~Energie()
{

}

void Energie::afficher()
{
    //gotolicol(y,x);//Pour determiner ou est ce que l'on va écrire
    Color(m_couleur,0);
    std::cout<<getDomaine()<<" : "<<getNom()<<std::endl;
    std::cout<<"Description de la carte : "<<std::endl<<getDescription()<<std::endl;
    std::cout<<std::endl<<"Point energie : "<<getGain()<<std::endl;

}

void Energie::utiliser()
{
    if(getGain()>0)//test si il reste des points energies
    {
        setGain(getGain()-1);//decrementation des points energies
        if(getGain()>0)
        {
            std::cout<<"Votre carte "<<getNom()<<" n a plus que "<<getGain()<<" point(s) energie! "<<std::endl;
        }
        else
        {
            std::cout<<"carte morte"<<std::endl;
            //utilisation du booleen
        }
    }

}
