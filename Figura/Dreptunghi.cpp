//
// Created by Ionut on 6/2/2022.
//

#include "Dreptunghi.h"

string Dreptunghi::GetName() {
    return "Dreptunghi";
}

string Dreptunghi::GetColor(string color) {
    this->GetCuloare()= color;
}

Dreptunghi::Dreptunghi(string color) {
this->culoare = color;
}
