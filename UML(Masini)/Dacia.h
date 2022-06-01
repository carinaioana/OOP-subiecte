//
// Created by Carina on 5/31/2022.
//

#ifndef UML_MASINI__DACIA_H
#define UML_MASINI__DACIA_H

#include "MasinaOras.h"

class Dacia : public MasinaOras {
protected:
    int capacitate;
    string culoare;
public:
    void setCapacitate(int capacitate);
    void setCuloare (string culoare);
    int getCapacitate() const override;
    string getCuloare() const override;
    string getName() const override;
};


#endif //UML_MASINI__DACIA_H
