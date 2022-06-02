//
// Created by Ionut on 6/2/2022.
//

#ifndef FIGURA_COLOR_H
#define FIGURA_COLOR_H

#include "Figura.h"

class Color{
private:
    string culoare;
public:
    Color(string culoare);
    bool HasColor();
    string GetColor();
};


#endif //FIGURA_COLOR_H
