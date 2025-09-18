#include "Livraison.h"
Livraison::Livraison(Faction* _faction) : Vaisseau(1000000, 47, 600, 690, 500, "vaisseauBlebis", 1, 0, _faction)
{

}
Livraison::~Livraison()
{
}
string Livraison::to_String()
{
	std::string info = Vaisseau::to_String();
	info.append("jfais dla livraison");
	return info;
}
