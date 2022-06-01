//
// Created by Carina on 5/29/2022.
//

#ifndef UML__PRINTER__PRINTER_H
#define UML__PRINTER__PRINTER_H

#include <string>

using namespace std;

class Printer {

public:
    virtual string GetFormatName() = 0;
    virtual string FormatNumber(int number) = 0 ;
};


#endif //UML__PRINTER__PRINTER_H
