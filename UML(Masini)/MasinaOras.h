//
// Created by Carina on 5/31/2022.
//

#ifndef UML_MASINI__MASINAORAS_H
#define UML_MASINI__MASINAORAS_H

#include "Masina.h"

class MasinaOras : public Masina {
public:
    virtual int getCapacitate() const = 0 ;
    virtual string getCuloare() const = 0;
};


#endif //UML_MASINI__MASINAORAS_H
