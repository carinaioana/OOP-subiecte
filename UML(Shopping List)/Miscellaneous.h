//
// Created by Carina on 6/1/2022.
//

#ifndef UML_SHOPPING_LIST__MISCELLANEOUS_H
#define UML_SHOPPING_LIST__MISCELLANEOUS_H
#include "Item.h"

class Miscellaneous : public Item{
private:
    int count;
public:
    string getInfo() override;
    void setCount(int count);
};


#endif //UML_SHOPPING_LIST__MISCELLANEOUS_H
