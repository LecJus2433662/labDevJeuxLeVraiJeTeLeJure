#include <iostream>
#include <ctime>
#include "FactoryVaisseau.h"
#include "Vaisseau.h"
#include "Station.h"
using std::string;
using std::cout;
using std::cin;
int main()
{
	srand(time(NULL));
	cout << "       !\n       !\n       ^\n      / \\\n     /___\\\n    |=   =|\n    |     |\n    |     |\n    |     |\n    |     |\n    |     |\n    |     |\n    |     |\n    |     |\n    |     |\n   /|##!##|\\\n  / |##!##| \\\n /  |##!##|  \\\n|  / ^ | ^ \\  |\n| /  ( | )  \\ |\n|/   ( | )   \\|\n    ((   ))\n   ((  :  ))\n   ((  :  ))\n    ((   ))\n     (( ))\n      ( )\n       .\n       .\n       .\n"<< std::endl;
	cout << "Bienvenue dans le jeu Space Explorer" << std::endl;
	cout << "Appuyez sur entrée pour commencer" << std::endl;
	cin.get();
	Station* station = new Station();

	station->init();
	station->menu();



}


