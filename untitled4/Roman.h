//
// Created by Carina on 5/28/2022.
//

#ifndef UNTITLED4_ROMAN_H
#define UNTITLED4_ROMAN_H
#include <string>
#include "Carte.h"



using namespace std;

class Roman :public Carte{
private:
    string nume;
    string autor;
public:
    Roman(string nume, string autor);
    string GetInfo()override;
};


#endif //UNTITLED4_ROMAN_H
