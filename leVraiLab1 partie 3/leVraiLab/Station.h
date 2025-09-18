#pragma once
#include <vector>
#include "Vaisseau.h"
class Station {
private:
    int platinumDisponible;
    int vieStation;
    std::vector<Vaisseau*> vecVaisseau;

public:
    Station();
    

    ~Station();
    
    std::vector<Vaisseau*> getVaisseauDispo();
    void menu();
    void exoploration();
    void acheterVaisseau(std::vector<Vaisseau*> vaisseauDispo);
    void init();

    void ajouterVaisseau(Vaisseau* vaisseau);
   
    virtual string to_String();

};
