#pragma once
#include <string>
using std::string;
class Faction
{
private:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
public:
	Faction(int attaque, int defense, int vie, int capacite, string nom);
	~Faction();
	string getNom();

};

