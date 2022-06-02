//
// Created by Ionut on 6/2/2022.
//

#include "FiguriContainer.h"

void FiguriContainer::Add(Figura * figura) {
    this->figuri.push_back(figura);
}

void FiguriContainer::ShowAll() {
for(auto it = figuri.begin() ; it!= figuri.end() ;++it){
    cout<<(*it)->GetName()<<":"<<(*it)->GetCuloare()<<endl;
}
}

void FiguriContainer::ShowByColor(Color* culoare) {
    cout<<"Figuri cu culoarea: "<< culoare->GetColor()<<endl;
    for(auto it = figuri.begin(); it!= figuri.end() ;++it){
        if((*it)->GetCuloare() == culoare->GetColor() )
            cout<<(*it)->GetName()<<endl;
    }
}
