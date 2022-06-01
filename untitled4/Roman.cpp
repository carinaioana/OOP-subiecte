//
// Created by Carina on 5/28/2022.
//

#include "Roman.h"
#include <string>

Roman:: Roman(string nume, string autor) {
   this-> nume = nume;
   this -> autor =autor;
}

string Roman::GetInfo() {
    return " Roman " + this->nume + " de " + this->autor;
}
