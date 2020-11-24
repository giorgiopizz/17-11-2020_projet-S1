#include "speciales.h"
#include "creature.h"

/////////////////////////////
///METHODES CARTE SPECIALE///
/////////////////////////////

Speciale::Speciale(int cycle,std::string nom, std::string description, bool pioche, int prix, int quantite, int identifiant)
:Carte(nom,description, prix,3, quantite,identifiant),m_cycleVie(cycle),m_pioche(pioche)
{}

int Speciale::getCycle()const
{
    return m_cycleVie;
}

bool Speciale::getBool()const
{
    return m_pioche;
}

void Speciale::setCycle(int cycle)
{
    m_cycleVie=cycle;
}

void Speciale::setBool(bool pioche)
{
    m_pioche=pioche;
}

void Speciale::pouvoir()
{
        std::cout << " pouvoir en marche" << std::endl;
}



/*
Fonction a utiliser dans la boucle de jeu, 1 fois par tour
Pas de parametres
Valeur de retour permet de prevenir la fonction finDeVie qu'il faut ranger la carte
*/
int Speciale::cycleVie()
{
    //Tant que la carte speciale n'est pas expiree, on utilise son pouvoir
    int alerteFin=0;
    if(getCycle()!=0){
        pouvoir();
        setCycle(getCycle()-1);
    }

    else if(getCycle()==0){
        std::cout << "carte expiree" << std::endl;
        alerteFin=1;
        ///On peut peut-etre utiliser une variable a retourner dans la boucle de jeu pour savoir quand
        ///remettre carte dans la pioche ou dans cimetiere ???
    }

    return alerteFin;
}


/*
Fonction a utiliser une fois que cycle de vie termine, permet de ranger ou jeter la carte
Parametres : le deck, le cimetiere et la variable qui previent la fonction que la carte est morte et donc a ranger
Retourne le conteneur, soit le deck soit le cimetiere, qui a ete modifie
*/
std::vector<Carte> Speciale::finDeVie(std::vector<Carte> deck, std::vector<Carte> cimetiere, int alerte)
{
    std::vector <Carte> tmp;
    Speciale carteObj(getCycle(), getNom(),getDescription(),getBool(), getPrix(),getQuantite(), getIdentifiant()); //Contient l'objet

    //condition permettant de verifier que la carte est bien morte
    if(alerte==1)
        {
        //Si la carte  doit retourner dans la pioche lorsqu'elle a fini son cycle de vie
            if(getBool()==true)
            {
                deck.push_back(carteObj); //On ajoute l'objet au deck
                tmp=deck; //permet de retourner le deck
            }

        //Si la carte doit aller dans le cimetiere a la fin de son cycle de vie
            else if(getBool()==false)
            {
                cimetiere.push_back(carteObj); //on ajoute l'objet au cimetiere
                tmp=cimetiere; //permet de retourner le cimetiere
            }
        }
    return tmp;
}



///////////////////////////////
///METHODES CARTES SPECIALES///
///////////////////////////////


    ///////
    ///1///
    ///////

//Constructeur
Spe1 :: Spe1()
:Speciale(0,"spe1","pouvoir spe1", true, 3,30,12)
{
    //Parametres a changer
}

//Destructeur
Spe1 :: ~Spe1()
{}


/*Parametres :
Permet de retourner l'attaque de l'adversaire contre lui meme
crea_A = creature qui attaque et qui va subir le pouvoir de la carte
attaque = attaque de la crea_A
Retourne la carte modifiee
*/
Creature Spe1::pouvoir(Creature crea_A, Attaque attaque)
{
    crea_A.setLP(crea_A.getLP()-attaque.getHp()); //L'attaque de crea A se retourne contre elle
    return crea_A;
}

    ///////
    ///2///
    ///////

//Constructeur
Spe2 :: Spe2()
:Speciale(1,"spe2","description", true, 3, 10,13)
{}

//Destructeur
Spe2 :: ~Spe2()
{}


/*
On choisit la carte suivante dans notre pioche, il faut donc derouler la pioche (tout afficher), et lire la selection du joueur
Parametre : vecteur de carte : deck du joueur qui a joue la carte speciale
Retour : carte selectionnee par le joueur
*/
Carte Spe2::pouvoir(std::vector <Carte> deck)
{
    //Afficher toutes les cartes
    //choisir carte de notre choix a jouer, dans la pioche
    //condition : passer un tour ?
    Carte selec;

    return selec;
}
    ///////
    ///3///
    ///////

//Constructeur
Spe3 :: Spe3()
:Speciale(0,"nom","description", true, 2,10,14)
{}


//Destructeur
Spe3 :: ~Spe3()
{}


/*
Fonction qui permet de recuperer une carte aleatoire du cimetiere
parametre : vecteur de carte = le cimetiere
retour : carte recuperee aleatoirement dans le cimetiere
*/
Carte Spe3 :: pouvoir(std::vector<Carte> cimetiere)
{ ///ATTENTION : Supprimer la carte retournee du cimetiere en dehors du ss prog si on veut eviter les pointeurs...

    srand(time(NULL));
    int alea=rand()%cimetiere.size()+1; //Random qui va permettre de recuperer une carte dans le cimetiere
    int j=0;
    Carte selec;

    for(const auto elem : cimetiere){
        j++;
        if(j==alea) selec = elem; //on recupere une carte aleatoire dans le cimetiere
    }

    return selec; // et on la retourne
}



    ///////
    ///4///
    ///////

//Constructeur
Spe4 :: Spe4()
:Speciale(2,"Heal","heals the creature", true, 3, 10, 15)
{}

//Destructeur
Spe4 :: ~Spe4()
{}


/*
permet de rajouter des pts de vie a la creature en jeu du joueur
parametre : creature en question
Retour : creature en question avec plus de pv
*/


Creature Spe4::pouvoir(Creature creature)
{
    creature.setLP(creature.getLP()+10); //adapter les pts de vie a rajouter en fct de pt de vie de base de la creature
    //ou ajouter pt de vie en fct de pt de vie actuels maybe ?

    return creature;
}




    ///////
    ///5///
    ///////


//Constructeur
Spe5 :: Spe5()
:Speciale(1,"spe5","Immunise", true, 3, 10, 16){

}

//Destructeur
Spe5 :: ~Spe5(){

}




    ///////
    ///6///
    ///////


//Constructeur
Spe6 :: Spe6()
:Speciale(0," "," ", true,3,10, 17){

}

//Destructeur
Spe6 :: ~Spe6(){

}


/*
La carte retournee est a ajouter au cimetiere et a retirer du deck de l'adversaire
Parametre : deck = deck de l'adversaire
retour : Carte selectionne aleatoirement a envoyer au cimetiere
*/
Carte Spe6::pouvoir(std::vector<Carte> deck){
    srand(time(NULL));
    int alea=rand()%deck.size(); //Random qui va permettre de recuperer une carte dans le deck
    int j=0;
    Carte selec; //Carte selectionnee par la variable alea

    for(const auto elem : deck){
        j++;
        if(j==alea) selec = elem; //On recupere une carte au hasard
    }

    return selec; // et on la retourne
}


