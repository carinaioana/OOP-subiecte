//
// Created by Ionut on 6/2/2022.
//

#ifndef FIGURA_PATRAT_H
#define FIGURA_PATRAT_H

#include "Dreptunghi.h"

class Patrat : public Figura{
public:
    Patrat(string color);
    string GetName() override;
};


#endif //FIGURA_PATRAT_H
