//
// Created by Carina on 6/1/2022.
//

#include "Miscellaneous.h"

void Miscellaneous::setCount(int count) {
this->count = count;
}

string Miscellaneous::getInfo() {
    return to_string(this->count) + " items";
}


