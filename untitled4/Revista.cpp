//
// Created by Carina on 5/28/2022.
//
#include "string"
#include "Revista.h"

Revista::Revista(string titlu, int nrArticole) {
    this->titlu = titlu;
    this->nrArticole = nrArticole;
}

string Revista::GetInfo() {
    return " Revista " + this->titlu + " cu " + to_string(this->nrArticole);
}
