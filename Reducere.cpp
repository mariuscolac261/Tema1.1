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
    for (auto i = 0ull; i < componente.size(); i++) {
        if (componente[i].getPrice() > 1000) {
            float x = componente[i].getPrice() - y * componente[i].getPrice();
            componente[i].setPrice(x);
        }
        std::cout << componente[i].getPrice();
    }
}
