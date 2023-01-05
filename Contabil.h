//
// Created by colac on 12/21/2022.
//

#ifndef TEMA2POO_CONTABIL_H
#define TEMA2POO_CONTABIL_H
#include "Angajati.h"
#include <iostream>
#include <memory>
#include <string>
#include <utility>

class Contabil : public Angajati{
public:

    Contabil(const std::string &name, int dw, float whours);
    std::shared_ptr<Angajati> clone() const override;
private:
    double salariu1() const override;
    void afisare(std::ostream &os) const override;
    int dw;
    float whours;




};


#endif //TEMA2POO_CONTABIL_H
