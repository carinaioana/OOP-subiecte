#include <iostream>
#include <string>

#include "Revista.h"
#include "Biblioteca.h"
#include "Roman.h"

///new, delete,new[],delte[] -> c++
///malloc,(calloc,realloc) ,free -> c

int main()
{
    Biblioteca b;
    (b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
    b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
    for (auto x : b)
    {

        std::cout << x->GetInfo() << std::endl;
    }
//    for (auto it = b.begin(); it != b.end(); ++ it) { ///begin returneaza un iterator
//        auto x = *it;
//        std::cout << x->GetInfo() << std::endl;
//    }
    std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;//returneaza nr de carti
    std::cout << "Lista doar cu romane:" << std::endl;
   //lambda

     b.PrintFilter( [] (Carte* c) -> bool {
        auto *pRoman = dynamic_cast <Roman*> (c); //facem castare dinamica de la o carte la un roman "downgrade"
        if(pRoman != nullptr) //daca e dif de 0 atunci este un roman
            return true;
        else
            return false; // altfel nu este
  // adaugati codul care determina daca o carte este un Roman
     });
    return 0;
}