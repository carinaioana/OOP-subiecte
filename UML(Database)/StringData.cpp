//
// Created by uic70278 on 5/30/2022.
//

#include "StringData.h"
#include <iostream>
using namespace std;

StringData::StringData( string name, string value) : Entry(name) {
    this->value = value;

}

void StringData::Add(string toAdd) {
    this->value = this->value + toAdd;

}

bool StringData::Substract(int toSubstract) {
    int length = this->value.size();
    if( length < toSubstract ){
        return 0;
    }
    else{
        this->value.resize(length - toSubstract);
        return 1;
    }

}

void StringData::Print() {

    cout<< this->name << " = " << this->value <<"; ";

}
