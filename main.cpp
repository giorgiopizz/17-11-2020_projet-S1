#include "speciales.h"
#include "energie.h"
#include "boutique.h"
#include "deck.h"
#include "Cimetiere.h"
#include "collection.h"
#include "attaque.h"
#include "carte.h"
#include "creature.h"
#include "jeu.h"
#include "joueur.h"

int main()
{
    /*
    Deck c = Deck();
    Energie * e1 = new Energie("Source d'energie", "Energie fournie par la technologie", 5, 1, 15, "Technologie",50,1);
    c.ajouter(e1);
    Creature * crea1 = new Creature("Bloom", "Heroine du Winx club", 15, 15, 0, 10,5);
    c.ajouter(crea1);
    std::vector <Carte*> d = c.getCartesD();
    Energie * en = (Energie*) d[0];
    Creature * crea = (Creature* ) d[1];

    std::cout << en->getGain() <<std::endl;
    std::cout << crea->getEnergie() <<std::endl;*/

    Boutique prova = Boutique();
    prova.remplir();


    Creature * crea = (Creature *) prova.getCartes()[9];
    std::cout << crea->getLP() <<std::endl;
    std::cout << crea->getEnergie() <<std::endl;

    /*
    Creature * crea1 = new Creature("Bloom", "Heroine du Winx club", 15, 15, 0, 10,5);



    std::vector <Carte*> d = prova.getCartes();
    Creature * crea = (Creature *) d[0];
    std::cout << crea->getLP() <<std::endl;

    /*std::cout << d[0].getQuantite() <<std::endl;
    Creature* crea = (Creature*) &d[0];
    std::cout << crea->getLP() <<std::endl;*/
    return 0;
}
