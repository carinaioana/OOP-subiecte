//
// Created by Ionut on 6/2/2022.
//

#include "Color.h"

//bool Color::HasColor() {
//if( this->culoare  NULL)
//    return 1;
//else return 0;
//}

string Color::GetColor() {
    return this->culoare;
}

Color::Color(string culoare) {
this->culoare = culoare;
}


