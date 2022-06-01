//
// Created by uic70278 on 5/30/2022.
//

#ifndef UNTITLED1_DATABASE_H
#define UNTITLED1_DATABASE_H

#include "Entry.h"
#include <list>
using List = std :: list < Entry*>;

class Database {
private:

    std::list<Entry*>entries;

public:
    Database& operator+=(Entry *e);
    bool operator-=(string prop);

    void Print();

    List :: iterator begin();
    List :: iterator end();


};


#endif //UNTITLED1_DATABASE_H
