#include "joueur.h"

Joueur::Joueur(){}
Joueur::Joueur(std::string nom):m_nom(nom)
{
    m_LP=2000;
    recupDeck();
}
Joueur::Joueur(std::string nom,int cagnotte)
:m_nom(nom), m_cagnotte(cagnotte)
{
    m_LP=2000;
    m_collection=Collection();
}


Joueur::~Joueur()
{
    std::ofstream game("game.txt");
    std::string sFinale;
    std::string StringCollection=" ";
    std::vector <Carte*> c=m_collection.getCollection();
    for(int i=0; i<c.size(); i++)
    {
        StringCollection+=std::to_string(c[i]->getIdentifiant())+",";
    }
};



std::vector<Carte*> Joueur::recupListe()
{
    std::ifstream game("game.txt");
    std::string s;
    std::vector <Carte*> Lista;
    Carte tmp;
    while(std::getline(game, s))
    {
        std::string n=s.substr(0,s.find("="));
        if(n==m_nom)
        {
            std::string m=s.substr(s.find("=")+1,100000000);
            std::string o=m.substr(0, m.find(";"));
            std::string coin=m.substr(m.find(";")+1, 100000000);
            std::cout<< o<<std::endl<<coin<<std::endl;

            std::string delimiter = ",";

            size_t pos = 0;
            std::string token;
            while ((pos = o.find(delimiter)) != std::string::npos)
            {
                token = o.substr(0, pos);
                tmp = Carte(std::stoi(token));
                Lista.push_back(&tmp);
                //std::cout << token << std::endl;
                o.erase(0, pos + 1);
            }
            break;
            //std::cout << o << std::endl;
        }
    }
    return Lista;

}

void Joueur::recupDeck()
{
    m_collection=Collection();
    m_collection.setCollection(recupListe());
}
