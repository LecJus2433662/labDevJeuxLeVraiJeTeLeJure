#include "Transport.h"
string Transport::to_String()
{
	std::string info = Vaisseau::to_String();
	info.append("jfais du transport");
	return info;
}

Transport::Transport(Faction* _faction) : Vaisseau(100000, 47, 600, 690, 500, "vaisseau Amazoune", 1, 0,_faction)
{

}

Transport::~Transport()
{

}