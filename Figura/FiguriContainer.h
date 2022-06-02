//
// Created by Ionut on 6/2/2022.
//

#ifndef FIGURA_FIGURICONTAINER_H
#define FIGURA_FIGURICONTAINER_H

#include <iostream>
#include <string>
#include <list>
#include "Figura.h"
#include "Color.h"
using List = std:: list<Figura*>;
using namespace std;

class FiguriContainer {
protected:
    std::list<Figura*>figuri;
public:
    void Add(Figura* figura);
    void ShowAll();
    void ShowByColor(Color * culoare);
};


#endif //FIGURA_FIGURICONTAINER_H
