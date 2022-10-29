//
// Created by colac on 10/28/2022.
//

#include "Angajat.h"


Angajat::Angajat(const string &NAME, const string ACTIVITY) : name{NAME}, activity{ACTIVITY} {
    std::cout << "Constructor de initializare Angajat\n";
}

Angajat::Angajat(const Angajat &other) : name{other.name}, activity{other.activity} {
    std::cout << "COnstructor de copiere Angajat\n";
}

Angajat &Angajat::operator=(const Angajat &other) {
    name = other.name;
    activity = other.activity;
    std::cout << "operator= copiere Angajat\n";
    return *this;
}

ostream &operator<<(ostream &COUT, const Angajat &a1) {
    COUT << "Nume : " << a1.name << "Activitate : " << a1.activity << "\n";
    return COUT;
}

Angajat::~Angajat() {
    std::cout << "Destr Angajat\n";
}
