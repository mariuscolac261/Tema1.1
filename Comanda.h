//
// Created by colac on 10/31/2022.
//

#ifndef TEMA1_COMANDA_H
#define TEMA1_COMANDA_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Comanda {
public:
    explicit Comanda(float CPRICE = 500, int NRC = 5);

    Comanda(const Comanda &other);

    Comanda &operator=(const Comanda &other);

    void setCprice(float CPRICE);

    [[nodiscard]] float getCprice() const;

    int getNrc();

    ~Comanda();

    friend ostream &operator<<(ostream &os, const Comanda &co);

private:
    float cprice;
    int nrc;
};


#endif //TEMA1_COMANDA_H
