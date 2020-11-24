#include "deck.h"


//Constructeur
Deck::Deck()
{

}

//Destructeur
Deck::~Deck()
{

}


//accesseurs

int Deck::getTaille() const
{
    return m_taille;
}

std::vector <Carte*> Deck::getCartesD() const
{
    return m_cartesD;
}
std::vector<Carte*> Deck::getCartesDU() const
{
    return m_cartesDU;
}

void Deck::setCartesD(std::vector<Carte*> cartesD)
{
    m_cartesD = cartesD;
}
void Deck::setCartesDU(std::vector<Carte*> cartesDU)
{
    m_cartesDU = cartesDU;
}


/*Permet au joueur de selectionner les cartes avec lesquelles il va jouer parmis sa collection
Prend la collection du joueur en parametre*/

void Deck::remplirDeck(std::vector <Carte*> &collec)
{
    int i = 0;
    int compteur = getTaille();//compteur pour afficher le nombre restant de carte a selectionner
    int selection [getTaille()];//tableau pour recuperer tous les choix du joueur
    std::vector <Carte*> cartesD = getCartesD();
    std::vector <Carte*> collection = collec;
    bool existante = false; // permet d'afficher un message d'erreur si le joueur rentre un numero de carte inexistant

    std::cout << "Veuillez entrer les numeros des cartes que vous souhaitez selectionner :" << std::endl;
    std::cout<<"Appuyer sur entrer pour valider vos choix"<<std::endl;

    gotoligcol(2,5);// pour ecrire a un endroit bien precis sur la console et reecrire le compteur toujours au meme endroit il faudra modifier les coordonnees
    std::cout<<"Il vous reste "<<compteur<<" cartes  a selectionner"<<std::endl;

    for(int j=0; j<getTaille(); j++)//Permet de recuperer toutes les valeurs entrees par l'utilisateur dans le tableau
    {
        std::cin >> selection[j];
        for(const auto& elem : collection)
        {

            if(selection[j] == elem->getIdentifiant()) //Si on est arrive au niveau de l'indice de la carte choisie on recupere la carte choisie
            {
                cartesD.push_back(elem);//on ajoute la carte au deck
                collection.erase(collection.begin()+i);
                compteur--;
                existante = true;
                if(compteur == 0)//previent l'utilisateur quand toutes les cartes ont ete selectionnees
                {
                    gotoligcol(2,5);// pour ecrire a un endroit bien precis sur la console et reecrire le compteur toujours au meme endroit
                    std::cout<<"Vous avez selectionne toutes vos cartes!"<<std::endl;
                }
                else
                {
                    gotoligcol(2,5);// pour ecrire a un endroit bien precis sur la console et reecrire le compteur toujours au meme endroit
                    std::cout << "Il vous reste "<<compteur<<" cartes a selectionner" << std::endl;
                }
            }
            i++;
        }
        if(existante == false)
            {
                std::cout << "Numero de carte invalide! Veuillez saisir un nouveau numero de carte :" << std::endl;
            }

    }
    setCartesD(cartesD);
}

void Deck::afficherDeck()
{
   /* for(const auto& elem : getCartesD())
    {
        elem.afficher();
    }*/
}


void Deck::supprimer(Carte carteAsupp)
{
    std::vector<Carte*> deck = getCartesD();
    int i=0;

    for(const auto elem : deck){
        //Si on retrouve la carte dans le deck
        if(elem->getIdentifiant() == carteAsupp.getIdentifiant()){
            deck.erase(deck.begin()+i); //on la supprime de la collection
        }
        i++;
    }

    setCartesD(deck);
}

void Deck::ajouter(Carte nouvCarte)
{

    std::vector<Carte*> deck = getCartesD();
    deck.push_back(&nouvCarte);
    setCartesD(deck);

}

