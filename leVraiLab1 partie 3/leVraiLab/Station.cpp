#include "Station.h"
#include "Vaisseau.h"
#include "FactoryVaisseau.h" 
#include <iostream>
#include <thread> 
#include <chrono> 
#include <string>
#include <cstdlib>
using std::string;
using std::cout;
using std::cin;
Station::Station()
{
}

Station::~Station() {
	for (auto vaisseau : vecVaisseau) {
		delete vaisseau;
	}
}
void Station::acheterVaisseau(std::vector<Vaisseau*> vaisseaux)
{
	std::vector<Vaisseau*> vaisseauxDispo;


	int nb = 1;
	int choix;
	for (int i = 0; i < 3; i++)
	{
		vaisseauxDispo.push_back(FactoryVaisseau::getRandomVaisseau());
	}
	cout << "Quel vaisseau voulez-vous acheter ? 1, 2 ou 3\n";
	for (auto vaisseau : vaisseauxDispo) {
		cout << nb << " - " << vaisseau->to_String();
		cout << "\n";
		nb++;
	}
	cin >> choix;
	while (choix <= 1 || choix <= 3)
	{
		switch (choix)
		{
		case 1:

			if (platinumDisponible < vaisseauxDispo[0]->getValeur())
			{
				cout << "Vous n'avez pas assez de platinum\n";
				std::this_thread::sleep_for(std::chrono::seconds(3));
			}
			else
			{
				platinumDisponible -= vaisseauxDispo[0]->getValeur();
				vecVaisseau.push_back(vaisseauxDispo[0]);
			}
			break;
		case 2:
			if (platinumDisponible < vaisseauxDispo[1]->getValeur())
			{
				cout << "Vous n'avez pas assez de platinum\n";
				std::this_thread::sleep_for(std::chrono::seconds(3));
			}
			else
			{
				platinumDisponible -= vaisseauxDispo[1]->getValeur();
				vecVaisseau.push_back(vaisseauxDispo[1]);
			}
			break;
		case 3:
			if (platinumDisponible < vaisseauxDispo[2]->getValeur())
			{
				cout << "Vous n'avez pas assez de platinum\n";
				std::this_thread::sleep_for(std::chrono::seconds(3));
			}
			else
			{
				platinumDisponible -= vaisseauxDispo[2]->getValeur();
				vecVaisseau.push_back(vaisseauxDispo[2]);
			}
			break;
		 default:
			cout << "Mauvais choix\n";
			break;
		}
			choix = 4;
	}



}
void Station::exploration() {
	int numberOfTours = Vaisseau::genererNb(1, 5);
	for (int i = 0; i < numberOfTours; i++) {
		int ressourceRndm = Vaisseau::genererNb(1000, 30000);
		cout << "Envoi du vaisseau en exploration, jour " << i + 1 << "\n";
		cout << "recherche de ressources ...\n";
		std::this_thread::sleep_for(std::chrono::seconds(3));

		// Calculer la probabilité de ramener des ressources
		float probability = (float)(numberOfTours) / 5.0f;
		if (rand() % 100 < probability * 100) {
			cout << "Ressources trouver!!!\n vous avez trouver " << ressourceRndm << " platinum (wow t vraiment chanceux)";
			std::this_thread::sleep_for(std::chrono::seconds(3));
			platinumDisponible += ressourceRndm;
		}
		else
		{
			cout << "Aucune ressource trouver\n";
			std::this_thread::sleep_for(std::chrono::seconds(2));
		}
		system("cls");
	}
}




void Station::menu()
{
	int choix;
	bool fin = false;
	while (fin == false)
	{
		system("cls");
		cout << "1 - afficher les vaisseaux\n2 - Afficher la station\n3 - acheter un vaisseau\n4 - aller en exploration\n5 - quitter\n";
		cin >> choix;
		switch (choix)

		{
		case 1:
			cout << "Vaisseau disponible\n";
			for (auto vaisseau : vecVaisseau) {
				cout << vaisseau->to_String();
				cout << "\n";

			}
			std::this_thread::sleep_for(std::chrono::seconds(5));
			break;
		case 2:
			cout << to_String();
			std::this_thread::sleep_for(std::chrono::seconds(5));
			break;
		case 3:
			acheterVaisseau(vecVaisseau);
			break;
		case 4:
			exploration();
			break;
		case 5:
			fin = true;
			cout << "merci d'avoir jouer\n";
			break;
		}
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
	int nbVaisseau = vecVaisseau.size();
	info.append("Info de la station\n");
	info.append("Platinum disponible : ");
	info.append(std::to_string(platinumDisponible));
	info.append("\n");
	info.append("Vie de la station : ");
	info.append(std::to_string(vieStation));
	info.append("\n");
	info.append("Nombre de vaisseau disponible : ");
	info.append(std::to_string(nbVaisseau));
	info.append("\n");

	return info;
}
