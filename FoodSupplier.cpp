//
// Created by colac on 12/21/2022.
//

#include "FoodSupplier.h"

FoodSupplier::FoodSupplier(const std::string &nume, double md = 0, double p = 0, double j = 1, double s = 1)
        : Angajati(nume), md(md), p(p), j(j), s(s) {}


void FoodSupplier::adauga() const {
    if(md == 0)
    {
        std::cout << "Trimite mic dejun!" << "\n";
    }
    if(p == 0)
    {
        std::cout << "Trimte pranz!" << "\n";
    }
    if(j == 0)
    {
        std::cout << "Trimite sucuri!" << "\n";
    }
    if(s == 0)
    {
        std::cout << "Trimite snacks-uri!" << "\n";
    }
}

void FoodSupplier::afisare(std::ostream &os) const{
    os << md << "\n"
       << p << "\n"
       << j << "\n"
       << s;
}
