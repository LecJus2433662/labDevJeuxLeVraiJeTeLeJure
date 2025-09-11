#include "FactoryVaisseau.h"
#include "Vaisseau.h"
#include "Guerre.h"
#include "Livraison.h"
#include "Transport.h"

Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	Vaisseau* vaisseau(0);
	Faction* maFaction = getRandomFaction();

	TypeVaisseau typev = (TypeVaisseau)Transport::genererNb(1, 3);
	if (typev == TypeVaisseau::VGuerre)
		vaisseau = new Guerre(maFaction);
	else if (typev == TypeVaisseau::VLivraison)
		vaisseau = new Livraison(maFaction);
	else
		vaisseau = new Transport(maFaction);
	return vaisseau;
}
Faction* FactoryVaisseau::getRandomFaction()
{

	Faction* maFaction = nullptr;
	int nb = Transport::genererNb(1, 2);
	if (nb == 1)
		maFaction = new Faction(100, 50, 1000, 10000, "Blebis");
else
		maFaction = new Faction(150, 50, 750, 7500, "Nains");
	return maFaction;
}