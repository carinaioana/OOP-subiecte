//
// Created by Carina on 6/1/2022.
//

#ifndef UML_SHOPPING_LIST__SHOPPINGLIST_H
#define UML_SHOPPING_LIST__SHOPPINGLIST_H

#include "Item.h"
#include <iostream>
#include <list>
using namespace std;
using List = std:: list  <Item*>;

class ShoppingList {
private:
   list <Item*> items;
public:
    void addItem(Item* i);
    void printList();
};


#endif //UML_SHOPPING_LIST__SHOPPINGLIST_H
