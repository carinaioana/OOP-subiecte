//
// Created by Carina on 5/29/2022.
//

#ifndef UML__PRINTER__NUMBER_H
#define UML__PRINTER__NUMBER_H

#include <iostream>
#include <string>
#include "Printer.h"
#include "Hexazecimal.h"
#include "Decimal.h"

#include <vector>
using namespace std;
using pPrinter= std::vector<Printer*>;


class Number {
private:
    int number;
    int count;
    std::vector<Printer*>printers[100];
public:
    Number(int number);

    operator int ();
    void Print();

    Number& operator +=(Printer * p );

    Number operator + (Number n);
    Number operator - (Number n);
    Number  operator * (Number n);
    Number operator / (Number n);
};


#endif //UML__PRINTER__NUMBER_H
