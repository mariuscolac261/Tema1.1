//
// Created by colac on 10/29/2022.
//

#include "Reducere.h"

Reducere::Reducere(const vector<Componenta> &componente) : componente(componente) {}

int Reducere::reducere() const {
    int n;
    for (int i = 0; i < n; i++) {
        if (componente[i].getPrice() > 1000 && componente[i].getBrand() == "Nvidia") {
            return componente[i].getPrice() - (10 / 100) * componente[i].getPrice();

        }
    }
}

Reducere::~Reducere() {
    std::cout << "Destr Reducere\n";
}
