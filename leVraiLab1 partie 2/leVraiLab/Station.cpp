#include "Station.h"
#include "Vaisseau.h"
#include "FactoryVaisseau.h" 
#include <string>

Station::Station()
{
}

Station::~Station() {
    for (auto vaisseau : vecVaisseau) {
        delete vaisseau;
    }
}

void Station::init() {
    for (int i = 0; i < 3; i++) {
        vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
    }
}

std::vector<Vaisseau*> Station::getVaisseauDispo() {
    return vecVaisseau;
}

void Station::ajouterVaisseau(Vaisseau* vaisseau) {
    vecVaisseau.push_back(vaisseau);
}
string Station::to_String()
{
    string info;
    info.append(std::to_string(platinumDisponible));
    info.append(std::to_string(vieStation));
	for (auto vaisseau : vecVaisseau) {
		info.append(vaisseau->to_String());
		info.append("\n");
	}
	return info;
}
