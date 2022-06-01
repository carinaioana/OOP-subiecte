//
// Created by uic70278 on 5/30/2022.
//

#ifndef UNTITLED1_ENTRY_H
#define UNTITLED1_ENTRY_H


#include <string>
#include <list>


using namespace std;


class Entry {

protected:
    string name;

public:
    Entry(string name);
    string GetName();

     virtual void Add(string toAdd) = 0;
     virtual bool Substract(int toSubstrat) = 0;
     virtual void Print () = 0;
};


#endif //UNTITLED1_ENTRY_H
