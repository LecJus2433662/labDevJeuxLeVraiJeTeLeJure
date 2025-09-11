#include "Faction.h"
#include <string>
using std::string;
Faction::Faction(int attaque, int defense, int vie, int capacite, string nom)
{
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->capacite = capacite;
	this->nom = nom;
}
Faction::~Faction() {}
string Faction::getNom() { return nom; }
