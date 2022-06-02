//
// Created by Ionut on 6/2/2022.
//

#ifndef FIGURA_DREPTUNGHI_H
#define FIGURA_DREPTUNGHI_H

#include "Figura.h"

class Dreptunghi : public Figura{
public:
    Dreptunghi(string color);
    string GetName() override;
    string GetColor(string color);
};


#endif //FIGURA_DREPTUNGHI_H
