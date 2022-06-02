//
// Created by Ionut on 6/2/2022.
//

#ifndef FIGURA_FIGURA_H
#define FIGURA_FIGURA_H

#include <iostream>
using namespace std;

class Figura {
protected:
    string culoare;
public:
    string GetCuloare();
    virtual string GetName() = 0;

};


#endif //FIGURA_FIGURA_H
