#include <iostream>
#include <ctime>
#include "FactoryVaisseau.h"
#include "Vaisseau.h"
using std::string;
using std::cout;
using std::cin;
int main()
{
	srand(time(NULL));
	cout << "... production d'un vaisseau" << std::endl;
	Vaisseau* monVaisseau = FactoryVaisseau::getRandomVaisseau();
	cout << monVaisseau->to_String();


	delete monVaisseau;

}


