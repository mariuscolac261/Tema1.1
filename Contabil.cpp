//
// Created by colac on 12/21/2022.
//

#include "Contabil.h"

Contabil::Contabil(const std::string &name, int dw = 20, float whours = 140) : Angajati(name), dw(dw), whours(whours) {}

double Contabil::salariu1() const {
    float salary = 400 * dw;
    if(whours > 80)
    {
        salary = salary + 0.1 * salary;
    }
    return salary;
}

void Contabil::afisare(std::ostream &os) const {
    os << "\tOre lucrate: " << whours << "\n"
       << "\tZile lucrate: " << dw;
}

std::shared_ptr<Angajati> Contabil::clone() const {
    return std::make_shared<Contabil>(*this);
}

