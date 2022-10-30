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

    Componenta(const string &NAME = "gpu", float PRICE = 10, const string &BRAND = "Nvidia");

    Componenta(const Componenta &other);

    Componenta &operator=(const Componenta &other);


    void setPrice(float PRICE);

    float getPrice();

    string getBrand() const;

    friend ostream &operator<<(ostream &COUT, const Componenta &c1);

    ~Componenta();

private:
    string name;
    float price;
    string brand;

};


#endif //TEMA1_COMPONENTA_H
