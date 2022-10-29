//
// Created by colac on 10/29/2022.
//

#include "Reducere.h"

Reducere::Reducere(const vector<Componenta> &componente) : componente(componente) {}

int Reducere::reducere() const {
    for (auto i = 0ull; i < componente.size(); i++) {
        if (componente[i].getPrice() > 1000 && componente[i].getBrand() == "Nvidia") {
            return componente[i].getPrice() - (10 / 100) * componente[i].getPrice();

        }
    }
    return 0;
}

Reducere::~Reducere() {
    std::cout << "Destr Reducere\n";
}
