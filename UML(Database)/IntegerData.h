//
// Created by uic70278 on 5/30/2022.
//

#ifndef UNTITLED1_INTEGERDATA_H
#define UNTITLED1_INTEGERDATA_H

#include "Entry.h"

class IntegerData : public Entry {
protected:
    int value;
public:
    IntegerData(string name,string value);
    void Add(string toAdd) override;
    bool Substract(int toSubstract)override;
    void Print()override;
};


#endif //UNTITLED1_INTEGERDATA_H
