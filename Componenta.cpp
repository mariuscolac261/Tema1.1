//
// Created by colac on 10/28/2022.
//

#include "Componenta.h"


Componenta::Componenta(const Componenta &other) : name{other.name}, price{other.price}, brand{other.brand} {
    std::cout << "Constructor de copiere";
}


Componenta &Componenta::operator=(const Componenta &other) {
    name = other.name;
    price = other.price;
    brand = other.brand;
    std::cout << "operator= copiere Componenta";
    return *this;
}



Componenta::~Componenta() {
    std::cout << "Destr Componenta";
}

ostream &operator<<(ostream &COUT, const Componenta &c1) {
    COUT << "Nume: " << c1.name << ", Pret: " << c1.price << ", Brand: " << c1.brand;
    return COUT;
}


Componenta::Componenta(const string &NAME, float PRICE, const string &BRAND) : name{NAME}, price{PRICE}, brand{BRAND} {
    std::cout << "Constructor de initializare";
}

void Componenta::setPrice(float PRICE) {
    price = PRICE;
}

float Componenta::getPrice() {
    return price;
}
















