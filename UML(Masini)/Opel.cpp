//
// Created by Carina on 5/31/2022.
//

#include "Opel.h"

void Opel::setCapacitate(int capacitate)  {
    this->capacitate =  capacitate;
}

string Opel::getName() const {
    return "Opel";
}

void Opel::setCuloare(string culoare) {
    this->culoare = culoare;
}

void Opel::setAnFabricatie(int anFabricatie) {
    this->anFabricatie = anFabricatie;
}

int Opel::getAnFabricatie() {
    return this->anFabricatie;
}

int Opel::getCapacitate() const {
    return this->capacitate;
}

string Opel::getCuloare() const {
    return this->culoare;
}
