//
// Created by Carina on 5/31/2022.
//

#ifndef UML_MASINI__SUV_H
#define UML_MASINI__SUV_H

#include "Masina.h"

class SUV :public Masina {
public:
    virtual int getConsum() const = 0;
};


#endif //UML_MASINI__SUV_H
