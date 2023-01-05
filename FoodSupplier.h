#ifndef TEMA2POO_FOODSUPPLIER_H
#define TEMA2POO_FOODSUPPLIER_H


#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include "Angajati.h"

class FoodSupplier: public Angajati {
public:
    FoodSupplier(const std::string &nume, double md, double p, double j, double s);

private:
    void adauga() const;
    void afisare(std::ostream &os) const override;
    double md = 0;
    double p = 0;
    double j = 1;
    double s = 1;

};


#endif //TEMA2POO_FOODSUPPLIER_H
