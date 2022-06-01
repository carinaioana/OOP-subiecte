//
// Created by Carina on 5/29/2022.
//
#include <stdexcept>
#include "Number.h"

Number::Number(int number) {
    this->count = 0;
    this->number = number;
}

Number::operator int()  {
    return this->number;
}

void Number::Print() {
    for( auto it = this->printers->begin(); it !=this->printers->end();++it ) {

        cout << " Format: " << (*it)->GetFormatName() <<
                " Value: " << (*it)->FormatNumber(this->number) << endl; }
}

Number &Number::operator+=(Printer *p) {
    this->printers->push_back(p);
    return *this;
}
Number Number::operator+(Number n) {
    Number result = Number((int)*this);
    result.number += n.number;
    return result;
}

Number Number::operator-(Number n) {
    Number result = Number((int)*this);
    result.number -= n.number;
    return result;
}

Number Number::operator*(Number n) {
    Number result = Number((int)*this);
    result.number *= n.number;
    return result;
}

Number Number::operator / (Number n) {
    Number result = Number((int)*this);
    result.number /= n.number;
    return result;
}







