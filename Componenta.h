//
// Created by colac on 10/28/2022.
//

#ifndef TEMA1_COMPONENTA_H
#define TEMA1_COMPONENTA_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::ostream;
using std::vector;

class Componenta {
public:
    Componenta(const string &NAME = "gpu", int PRICE = 10, const string &BRAND = "intel");

    Componenta(const Componenta &other);

    Componenta &operator=(const Componenta &other);

    int getPrice() const;

    string getBrand() const;

    friend ostream &operator<<(ostream &COUT, const Componenta &c1);

    ~Componenta();

    int reducere() const {
        int n;
        std::vector<Componenta> componente;
        for (int i = 0; i < n; i++) {
            if (componente[i].getPrice() > 1000 && componente[i].getBrand() == "Nvidia") {
                return componente[i].getPrice() - (10 / 100) * componente[i].getPrice();

            }
        }
    }


private:
    string name;
    int price;
    string brand;

};


#endif //TEMA1_COMPONENTA_H
