//
// Created by Carina on 6/1/2022.
//

#include "ShoppingList.h"

void ShoppingList::addItem(Item * i) {
    items.push_back(i);
}

void ShoppingList::printList() {
for(auto it = items.begin() ; it != items.end() ; ++it){
    cout<< (*it)->getName() << " : " << (*it)->getInfo() <<"; ";
}
}
