//
// Created by colac on 10/29/2022.
//

#include "Reducere.h"


Reducere::~Reducere() {
    std::cout << "Destr Reducere\n";
}


Reducere::Reducere(const vector<Componenta> &COMPONENTA) : componente{COMPONENTA} {
    std::cout << "Constructor de initializare";
}

void Reducere::sale() {
    float y = 0.1;
    for (auto &i: componente) {
        if (i.getPrice() > 1000) {
            float x = i.getPrice() - y * i.getPrice();
            i.setPrice(x);
        }
        std::cout << i.getPrice() << "\n";
    }
}

void Reducere::bonus() {

    for (auto &i: angajati) {
        if (i.getNrs() >= 50) {
            int x = i.getSallary() + 1000;
            i.setSallary(x);

        }
        std::cout << i.getSallary() << "\n";
    }
}

void Reducere::sale2() {

    for (auto &i: comenzi) {
        float x = 0.15;
        if (i.getCprice() > 2500 && i.getNrc() > 5) {
            float y = i.getCprice() - x * i.getCprice();
            i.setCprice(y);
        }

        std::cout << i.getCprice() << "\n";
    }
}

Reducere::Reducere(const vector<Angajat> &ANGAJATA) : angajati{ANGAJATA} {
    std::cout << "Constructor de initializare";
}

Reducere::Reducere(const vector<Comanda> &COMANDA) : comenzi{COMANDA} {
    std::cout << "Constructor de initializare";
}
