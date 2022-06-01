//
// Created by uic70278 on 5/30/2022.
//
#include "IntegerData.h"
#include <iostream>
using namespace std;


IntegerData::IntegerData(string name, string value): Entry(name) {
    this->value = strtol(value.c_str(), nullptr,10);
}
void IntegerData::Print() {
    cout<< this->name <<" = "<< this->value<<"; ";
}

void IntegerData::Add(string toAdd) {

    this->value = this->value + stoi(toAdd, nullptr ,10);

}

bool IntegerData::Substract(int toSubstract) {
    if( this->value < toSubstract ){
        return 0;
    }
    else{
        this->value = this->value - toSubstract;
        return 1;
    }
}
