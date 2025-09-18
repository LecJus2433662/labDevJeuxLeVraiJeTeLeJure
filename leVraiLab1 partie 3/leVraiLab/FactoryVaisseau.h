#pragma once
#include "Vaisseau.h"
enum TypeVaisseau { VGuerre, VLivraison, VTransport };

class FactoryVaisseau
{
public:
	static Vaisseau* getRandomVaisseau();


private:
	static Faction* getRandomFaction();
};

