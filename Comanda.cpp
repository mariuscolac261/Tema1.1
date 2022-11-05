//
// Created by colac on 10/31/2022.
//

#include "Comanda.h"


Comanda::Comanda(const Comanda &other) : cprice{other.cprice}, nrc{other.nrc} {
    std::cout << "Constructor de copiere Comanda";
}

Comanda &Comanda::operator=(const Comanda &other) {
    cprice = other.cprice;
    nrc = other.nrc;
    std::cout << "operator= copiere Comanda";
    return *this;
}

void Comanda::setCprice(float CPRICE) {
    cprice = CPRICE;
}

float Comanda::getCprice() {
    return cprice;
}

Comanda::~Comanda() {
    std::cout << "Destructor Comanda";
}

ostream &operator<<(ostream &os, const Comanda &co) {
    os << "Pret Comanda: " << co.cprice << "Numar comanda: " << co.nrc;
    return os;
}

void Comanda::setNrc(float NRC) {
    nrc = NRC;
}

int Comanda::getNrc() {
    return nrc;
}

Comanda::Comanda(float CPRICE, int NRC) : cprice{CPRICE}, nrc{NRC} {
    std::cout << "Constructor de initializare Comanda";
}
