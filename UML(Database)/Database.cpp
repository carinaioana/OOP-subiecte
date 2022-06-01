//
// Created by uic70278 on 5/30/2022.
//

#include "Database.h"
#include <iostream>
using namespace std;

Database& Database::operator+=(Entry *e) {
    this->entries.push_back(e);
    return *this;
}

bool Database::operator-=(string prop ) {
   for(auto it=this->entries.begin(); it != this->entries.end(); ++it) {
       if ((*it)->GetName() == prop) {
           this->entries.erase(it);
           return 1;
       }
   }
   return 0;
}

void Database::Print() {
    for(auto it = this->entries.begin(); it != this->entries.end() ; ++it){
        (*it)->Print();
    }
    cout<<endl;
}

List::iterator Database::begin() {
    return this->entries.begin();
}

List::iterator Database::end() {
    return this->entries.end();
}


