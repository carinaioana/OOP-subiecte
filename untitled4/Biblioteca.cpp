//
// Created by Carina on 5/28/2022.
//
#include <stdexcept>
#include <iostream>
#include "Biblioteca.h"




Biblioteca &Biblioteca::operator+=(Carte *c) {
    if (this->count >= 100){
        throw std :: runtime_error("Prea multe carti in biblioteca");
        ///daca nu vrem throw
        ///delete c
        /// return * this;
    }
   this -> carti[this->count] = c;
   this ->count ++;

   return *this;
}
Biblioteca::Biblioteca() {
    this->count = 0;
}


Biblioteca::~Biblioteca() {
    for(int i=0; i < this->count ;++i){
        delete this->carti[i];
    }
    ///stergem toate cartile noi puse
}

Biblioteca::Iterator Biblioteca :: begin() {
    return Iterator(0, this);
}

Biblioteca::Iterator Biblioteca :: end() {
    return Iterator(this->count, this);
}

Biblioteca::operator int() const {
    return this->count;
}


bool Biblioteca :: Iterator :: operator!= ( Biblioteca::Iterator const & otherIterator) const {
    return this->index != otherIterator.index;

}

Biblioteca::Iterator::Iterator(int index, Biblioteca *pBiblioteca) {
    this->index = index;
    this->pBiblioteca = pBiblioteca;
}

Carte *Biblioteca::Iterator::operator*() const {
    return this -> pBiblioteca -> carti [this->index];
}

Biblioteca::Iterator &Biblioteca::Iterator::operator++() {
    ++this->index;
    return *this;
}
