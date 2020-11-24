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
    Deck c = Deck();
    Energie * e1 = new Energie("Source d'energie", "Energie fournie par la technologie", 5, 1, 15, "Technologie",50,1);
    c.ajouter(e1);
    Creature * crea1 = new Creature("Bloom", "Heroine du Winx club", 15, 15, 0, 10,5);
    c.ajouter(crea1);
    std::vector <Carte*> d = c.getCartesD();
    Energie * en = (Energie*) d[0];
    Creature * crea = (Creature* ) d[1];

    std::cout << en->getGain() <<std::endl;
    std::cout << crea->getEnergie() <<std::endl;
    return 0;
}
