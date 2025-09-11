#pragma once
#include <string>
using std::string;
#include "Vaisseau.h"
class Transport :
	public Vaisseau
{
public:
	virtual string to_String();
	Transport(Faction* _faction);
	~Transport();
};

