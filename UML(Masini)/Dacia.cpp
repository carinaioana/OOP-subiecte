//
// Created by Carina on 5/31/2022.
//

#include "Dacia.h"

void Dacia::setCapacitate(int capacitate) {
this->capacitate = capacitate;
}

void Dacia::setCuloare(string culoare) {
this->culoare = culoare;
}

int Dacia::getCapacitate() const {
    return this->capacitate;
}

string Dacia::getCuloare() const {
    return this->culoare;
}

string Dacia::getName() const{
    return "Dacia";
}
