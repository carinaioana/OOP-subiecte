//
// Created by Carina on 5/28/2022.
//

#ifndef UNTITLED4_REVISTA_H
#define UNTITLED4_REVISTA_H

#include <string>
#include "Carte.h"



using namespace std;

class Revista : public Carte {
private:
    string titlu;
    int nrArticole;
public:
    Revista(string titlu, int nrArticole);
    string GetInfo()override;
};


#endif //UNTITLED4_REVISTA_H
