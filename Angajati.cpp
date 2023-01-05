//
// Created by colac on 12/20/2022.
//

#include "Angajati.h"
Angajati::Angajati(std::string nume) : name(std::move(nume)) {}

std::ostream &operator<<(std::ostream &os, const Angajati &ang) {
    os << "Nume: " << ang.name;
    ang.afisare(os);
    os << "\n";
    return os;
}

void Angajati::afisare(std::ostream &) const {}










