//
// Created by Carina on 6/1/2022.
//

#ifndef UML_SHOPPING_LIST__ITEM_H
#define UML_SHOPPING_LIST__ITEM_H

#include <string>
using namespace std;

class Item {
protected:
    string name;
public:
    string getName() const;
    void setName(string name);
    virtual string getInfo() = 0;

};


#endif //UML_SHOPPING_LIST__ITEM_H
