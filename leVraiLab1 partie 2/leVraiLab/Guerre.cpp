#include "Guerre.h"

Guerre::Guerre(Faction* _faction) :Vaisseau(100000, 47, 600, 690, 500, "vaisseauNain", 1, 0,_faction)
{

}
Guerre::~Guerre()
{
}
string Guerre::to_String()
{
	std::string info = Vaisseau::to_String();
	info.append("C'est pas ma guerre");
	return info;
}