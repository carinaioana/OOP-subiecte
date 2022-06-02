#include <iostream>
#include "Cerc.h"
#include "Color.h"
#include "Dreptunghi.h"
#include "Figura.h"
#include "FiguriContainer.h"
#include "Patrat.h"

int main() {
    FiguriContainer fig;
    fig.Add(new  Cerc("rosu"));
    fig.Add(new Patrat("verde"));
    fig.Add(new Dreptunghi("rosu"));
    fig.ShowAll();
    fig.ShowByColor(new Color("rosu"));
    return 0;
}
