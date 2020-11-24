#include "boutique.h"

//Constructeur
Boutique::Boutique()
{
}

//Destructeur
Boutique::~Boutique(){}

//Accesseurs
std::vector<Carte*> Boutique::getCartes(){
    return m_cartes;
}

void Boutique::setCartes(std::vector<Carte*> cartes){
    m_cartes=cartes;
}

std::vector<Carte*> Boutique::getCartesU(){
    return m_cartesU;
}

void Boutique::setCartesU(std::vector<Carte*> cartesU){
    m_cartesU=cartesU;
}



//On ajoute toutes les cartes dans la boutique. La boutique sert a contenir toutes les cartes du jeu
//Pas de parametres pas de retour
void Boutique::remplir(){

    int identifiant=0;//s'incremente de 1 a chaque fois qu'on associe a une carte

    ///CREATURES///
    Creature * crea1 = new Creature("Bloom", "Heroine du Winx club", 15, 15, 42, 10,5);
    Attaque * att1 = new Attaque (nom,des, coup, type, HP, pos);
    crea1->ajouter(att1);
    Creature crea2("Stella", "Meilleure amie de Bloom et membre du Winx club", 15, 15, 0,10,6);
    Creature crea3("Tecna", "Genie de la technologie", 15, 25, 0, 10,7);
    Creature crea4("Flora", "Meilleure amie de la nature", 15,25,0,10,8);
    Creature crea5("Musa", "Grande musicienne", 12, 45, 0, 23,9);
    Creature crea6("Leila", "Reine du plasma", 34, 64, 0, 15,10);
    Creature crea7("Roxy", "Murmure a l'oreille des animaux", 45, 22, 0, 50,11);

    ///ENERGIES///

    Energie e1("Source d'energie", "Energie fournie par la technologie", 5, 1, 15, "Technologie",50,1);
    Energie e2("Source d'energie", "Energie fournie par la nature", 5,1,2,"Terre", 50,2);
    Energie e3("Source d'energie", "Energie fournie par la lumiere", 5,1,14,"Lumiere", 50,3);
    Energie e4("Source d'energie", "Energie fournie par le feu", 5,1,4,"Feu", 50,4);

    ///SPECIALES///
    Spe1 speciale1;
    Spe2 speciale2;
    Spe3 speciale3;
    Spe4 speciale4;
    Spe5 speciale5;
    Spe6 speciale6;

    ///Vecteurs///
    std::vector <Carte*> cartes ;
    std::vector <Carte*> cartesU;


    ////////////////////
    ///AJOUT CREATURES//
    ////////////////////

    for(int i=0; i<crea1->getQuantite(); i++) {
        crea1->setIdentifiant(identifiant); //on assigne un identifiant a une carte
        cartes.push_back(crea1);
        if(i == crea1->getQuantite()-1) cartesU.push_back(crea1); //Si c'est la derniere carte a ajouter, on la copie dans le vecteur de cartes uniques
        identifiant++; //On incremente dans la boucle afin que l'identifiant soit unique pour chaque carte
    }
    /*
    Creature * crea = (Creature *) cartes[0];
    std::cout << crea->getLP() <<std::endl;*/
    /*
    for(int i=0; i<crea2.getQuantite(); i++) {
        crea2.setIdentifiant(identifiant);
        cartes.push_back(&crea2);
        if(i== crea2.getQuantite()-1) cartesU.push_back(&crea2);
        identifiant++;
    }

    for(int i=0; i<crea3.getQuantite(); i++) {
        crea3.setIdentifiant(identifiant);
        cartes.push_back(&crea3);
        if(i== crea3.getQuantite()-1) cartesU.push_back(&crea3);
        identifiant++;
    }

    for(int i=0; i<crea4.getQuantite(); i++) {
        crea4.setIdentifiant(identifiant);
        cartes.push_back(&crea4);
        if(i== crea4.getQuantite()-1) cartesU.push_back(&crea4);
        identifiant++;
    }

    for(int i=0; i<crea5.getQuantite(); i++) {
        crea5.setIdentifiant(identifiant);
        cartes.push_back(&crea5);
        if(i== crea5.getQuantite()-1) cartesU.push_back(&crea5);
        identifiant++;
    }

    for(int i=0; i<crea6.getQuantite(); i++) {
        crea6.setIdentifiant(identifiant);
        cartes.push_back(&crea6);
        if(i== crea6.getQuantite()-1) cartesU.push_back(&crea6);
        identifiant++;
    }

    for(int i=0; i<crea7.getQuantite(); i++) {
        crea7.setIdentifiant(identifiant);
        cartes.push_back(&crea7);
        if(i== crea7.getQuantite()-1) cartesU.push_back(&crea7);
        identifiant++;
    }


    ////////////////////
    ///AJOUT ENERGIES///
    ////////////////////

    for(int i=0; i<e1.getQuantite(); i++) {
        e1.setIdentifiant(identifiant);
        cartes.push_back(&e1);
        if(i==e1.getQuantite()-1) cartesU.push_back(&e1);
        identifiant++;
    }

    for(int i=0; i<e2.getQuantite(); i++) {
        e2.setIdentifiant(identifiant);
        cartes.push_back(&e2);
        if(i== e2.getQuantite()-1) cartesU.push_back(&e2);
        identifiant++;
    }

    for(int i=0; i<e3.getQuantite(); i++) {
        e3.setIdentifiant(identifiant);
        cartes.push_back(&e3);
        if(i== e3.getQuantite()-1) cartesU.push_back(&e3);
        identifiant++;
    }

    for(int i=0; i<e4.getQuantite(); i++) {
        e4.setIdentifiant(identifiant);
        cartes.push_back(&e4);
        if(i== e4.getQuantite()-1) cartesU.push_back(&e4);
        identifiant++;
    }


    /////////////////////
    ///AJOUT SPECIALES///
    /////////////////////

    for(int i=0; i<speciale1.getQuantite(); i++) {
        speciale1.setIdentifiant(identifiant);
        cartes.push_back(&speciale1);
        if(i== speciale1.getQuantite()-1) cartesU.push_back(&speciale1);
        identifiant++;
    }

    for(int i=0; i<speciale2.getQuantite(); i++) {
        speciale2.setIdentifiant(identifiant);
        cartes.push_back(&speciale2);
        if(i== speciale2.getQuantite()-1) cartesU.push_back(&speciale2);
        identifiant++;
    }

    for(int i=0; i<speciale3.getQuantite(); i++) {
        speciale3.setIdentifiant(identifiant);
        cartes.push_back(&speciale3);
        if(i== speciale3.getQuantite()-1) cartesU.push_back(&speciale3);
        identifiant++;
    }

    for(int i=0; i<speciale4.getQuantite(); i++) {
        speciale4.setIdentifiant(identifiant);
        cartes.push_back(&speciale4);
        if(i== speciale4.getQuantite()-1) cartesU.push_back(&speciale4);
        identifiant++;
    }

    for(int i=0; i<speciale5.getQuantite(); i++) {
        speciale5.setIdentifiant(identifiant);
        cartes.push_back(&speciale5);
        if(i== speciale5.getQuantite()-1) cartesU.push_back(&speciale5);
        identifiant++;
    }

    for(int i=0; i<speciale6.getQuantite(); i++) {
        speciale6.setIdentifiant(identifiant);
        cartes.push_back(&speciale6);
        if(i== speciale6.getQuantite()-1) cartesU.push_back(&speciale6);
        identifiant++;
    }
    */
    //On met les vecteurs modifies dans les attibuts
    setCartes(cartes);
    setCartesU(cartesU);

}

//Affichage de la liste des cartes disponibles dans la boutique
//Pas de parametres pas de retour
void Boutique::afficher(){
    int i=1;
    for(auto elem :getCartesU()){
        std::cout << i << "    ";
        //afficher toutes les cartes
        //elem.afficher();
        //afficher en ligne avec numero de la carte
    }
}


//Permet de selectionner la carte que l'on souhaite acheter
//pas de parametre
//On retourne la carte achetee
Carte Boutique::choisir(/*Joueur joueur*/){
    int choix;
    int i=1;
    Carte achat;
    std::vector<Carte*> cartesU = getCartesU();

    ///Pour ajouter la carte dans la collection du joueur
    //Collection collection=joueur.getCollection();

    std::cout << "Quelle carte voulez vous acheter ? " << std::endl;
    std::cin >> choix;

    for(const auto elem : cartesU){
        i++;
        if(choix==i) achat=*elem; //Si on est arrives au niveau de l'indice de la carte choisie on recupere la carte choisie
    }

    ///GESTION CAGNOTTE JOUEUR
    //joueur.setCagnotte(joueur.getCagnotte()-achat.getPrix());

    ///On ajoute la carte achetee a la collection du joueur
    //collection.ajouter(achat);
    //joueur.setCollection(collection);


    return achat;
}

//Permet de supprimer la carte achetee des conteneurs de la boutique
//Parametre : carte achetee
//pas de retour
void Boutique::supprimerCarte(Carte achat){
    std::vector <Carte*> cartesU=getCartesU();
    std::vector <Carte*> cartes=getCartes();

    int i=0;
    int stop=0; //variable qui va nous permettre de supprimer qu'une seule fois le modele de la carte achetee

    do{
        for(const auto elem : cartes){
            i++;
            if(*elem == achat){
                cartes.erase(cartes.begin()+i);//Si on retrouve la carte achetee dans le vecteur on la supprime du vect
                stop = 1; //Pour sortir de la boucle
            }
        }
    }while(stop==0);

    //Si c'est la derniere carte de ce modele
    if(achat.getQuantite()==1) {
        for(const auto elem : cartesU){
            if(*elem==achat) cartesU.erase(cartes.begin()+i); //Si on retrouve la carte achetee dans le vecteur on la supprime du vect
             i++;
        }
    }

    setCartes(cartes);
    setCartesU(cartesU);

}

