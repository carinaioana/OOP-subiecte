//
// Created by Carina on 6/1/2022.
//

#ifndef UML_SHOPPING_LIST__FOOD_H
#define UML_SHOPPING_LIST__FOOD_H

#include "Item.h"

class Food : public Item{
private:
    float quantity;
public:
    void setQuantity(float quantity);
    string getInfo() override;
};


#endif //UML_SHOPPING_LIST__FOOD_H
