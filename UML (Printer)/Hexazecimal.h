//
// Created by Carina on 5/29/2022.
//

#ifndef UML__PRINTER__HEXAZECIMAL_H
#define UML__PRINTER__HEXAZECIMAL_H

#include "Number.h"
#include <string>

using namespace std;

class Hexazecimal : public Printer {

public:
    string GetFormatName()override;
    string FormatNumber(int number) override;
};


#endif //UML__PRINTER__HEXAZECIMAL_H
