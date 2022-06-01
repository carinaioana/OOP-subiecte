//
// Created by Carina on 6/1/2022.
//

#include "Food.h"

void Food::setQuantity(float quantity) {
    this->quantity = quantity;
}

string Food::getInfo() {
    return to_string(this->quantity) +  " kg ";
}
