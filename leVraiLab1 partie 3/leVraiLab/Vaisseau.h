#pragma once
#include <string>
#include "Faction.h"
using std::string;
class Vaisseau
{
private:
	int valeurMarchande;
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;
	Faction* faction;

public:
	Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp, Faction* faction);
	~Vaisseau();
	int static genererNb(int min, int max);
	int	getAtt();
	int getDef();
	int getVie();

	int getValeur();

	virtual string to_String();

};

