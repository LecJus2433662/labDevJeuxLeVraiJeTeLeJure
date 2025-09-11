#pragma once
#include <string>
#include "Vaisseau.h"
#include "Faction.h"
using std::string;
class Guerre : public Vaisseau
{
public:
	Guerre(Faction* faction);
	~Guerre();
	virtual string to_String();
};

