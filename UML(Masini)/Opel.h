//
// Created by Carina on 5/31/2022.
//

#ifndef UML_MASINI__OPEL_H
#define UML_MASINI__OPEL_H

#include "MasinaOras.h"
#include <typeinfo>
class Opel : public MasinaOras {
private:
    int capacitate;
    string culoare;
    int anFabricatie;
public:
    void setCapacitate(int capacitate);
    void setCuloare( string culoare);
    void setAnFabricatie(int anFabricatie);
    int getAnFabricatie();
    string getName() const override;
    int getCapacitate() const override;
    string getCuloare() const override;
};

#endif //UML_MASINI__OPEL_H
