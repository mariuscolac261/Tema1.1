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
   float y = 0.1f;
    for (auto i = 0ull; i < componente.size(); i++) {
        if (componente[i].getPrice() > 1000) {
            float x = componente[i].getPrice() - y * componente[i].getPrice();
            componente[i].setPrice(x);
        }
        std::cout << componente[i].getPrice() << "\n";
    }
}

void Reducere::bonus() {

    for (auto i = 0ull; i < angajati.size(); i++) {
        if (angajati[i].getNrs() >= 50) {
            float x = angajati[i].getSallary() + 1000;
            angajati[i].setSallary(x);

        }
        std::cout << angajati[i].getSallary() << "\n";
    }
}

void Reducere::sale2() {
    float x = 0.15f;
    for (auto i = 0ull; i < comenzi.size(); i++) {
        if (comenzi[i].getCprice() > 2500 && comenzi[i].getNrc() > 5) {
            double y = comenzi[i].getCprice() - x * comenzi[i].getCprice();
            comenzi[i].setCprice(y);
        }

        std::cout << comenzi[i].getCprice() << "\n";
    }
}

Reducere::Reducere(const vector<Angajat> &ANGAJATA) : angajati{ANGAJATA} {
    std::cout << "Constructor de initializare";
}

Reducere::Reducere(const vector<Comanda> &COMANDA) : comenzi{COMANDA} {
    std::cout << "Constructor de initializare";
}
