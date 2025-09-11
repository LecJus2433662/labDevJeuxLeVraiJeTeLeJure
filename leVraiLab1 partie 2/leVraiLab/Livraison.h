#pragma once
#include <string>
using std::string;
#include "Vaisseau.h"
class Livraison :
	public Vaisseau
{
public:
	virtual string to_String();

	Livraison(Faction* _faction);
	~Livraison();

};

