//
// Created by colac on 10/28/2022.
//

#include "Angajat.h"


Angajat::Angajat(const string &NAME, float SALLARY, int NRS) : name{NAME}, sallary{SALLARY}, nrs{NRS} {
    std::cout << "Constructor de initializare";
}

Angajat::Angajat(const Angajat &other) : name{other.name}, sallary{other.sallary}, nrs{other.nrs} {
    std::cout << "Constructor de copiere Angajat";
}

Angajat &Angajat::operator=(const Angajat &other) {
    name = other.name;
    sallary = other.sallary;
    nrs = other.nrs;
    std::cout << "operator= copiere Angajat";
    return *this;
}

void Angajat::setSallary(float SALLARY) {
    sallary = SALLARY;
}

float Angajat::getSallary() {
    return sallary;
}


int Angajat::getNrs() {
    return nrs;
}

Angajat::~Angajat() {
    std::cout << "Destr Angajat";
}

ostream &operator<<(ostream &os, const Angajat &an) {
    os << "Nume: " << an.name << "Salariu: " << an.sallary << "Numar servicii prestate: " << an.nrs;
    return os;
}
