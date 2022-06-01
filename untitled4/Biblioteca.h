//
// Created by Carina on 5/28/2022.
//

#ifndef UNTITLED4_BIBLIOTECA_H
#define UNTITLED4_BIBLIOTECA_H
#include <iostream>
#include "Carte.h"
#include "Roman.h"
#include "Revista.h"

using namespace std;
class Biblioteca {
private:
    int count;
    Carte * carti[100];

public:
    class Iterator{
    private:
        int index;
        Biblioteca * pBiblioteca;
    public:
        Iterator(int index, Biblioteca *pBiblioteca);
        bool operator != (Iterator const &) const;
        Carte * operator * () const;
        Iterator & operator ++ ();
    };
    Biblioteca();
    ~Biblioteca();

    Biblioteca & operator+= (Carte *c);
    operator int () const;

    Iterator begin();
    Iterator end();

    template<typename PrintFunction>
    void PrintFilter(PrintFunction fn);

};
template<typename PrintFunction>
void Biblioteca::PrintFilter(PrintFunction fn) {
    for(auto x: *this)
    {
        if(fn( x ))
        cout << x->GetInfo()<<endl;
    }
}

#endif //UNTITLED4_BIBLIOTECA_H
