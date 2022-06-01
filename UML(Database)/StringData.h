//
// Created by uic70278 on 5/30/2022.
//

#ifndef UNTITLED1_STRINGDATA_H
#define UNTITLED1_STRINGDATA_H
#include "Entry.h"

class StringData : public Entry {
private:
    string value;

public:

    StringData( string name, string value);
     void Add(string toAdd) override;
    bool Substract(int toSubstract) override;
    void Print() override;
};


#endif //UNTITLED1_STRINGDATA_H
