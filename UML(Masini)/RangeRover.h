//
// Created by Carina on 5/31/2022.
//

#ifndef UML_MASINI__RANGEROVER_H
#define UML_MASINI__RANGEROVER_H


#include "SUV.h"

class RangeRover : public SUV {
protected:
    int consum;
public:
    void setConsum(int consum);
    int getConsum() const override;
    string getName() const override;
};


#endif //UML_MASINI__RANGEROVER_H
