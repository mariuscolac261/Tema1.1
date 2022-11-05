//
// Created by colac on 10/29/2022.
//

#ifndef TEMA1_REDUCERE_H
#define TEMA1_REDUCERE_H

#include <iostream>
#include <string>
#include <utility>
#include "Componenta.h"
#include "Angajat.h"
#include "Comanda.h"
#include <vector>

using std::string;
using std::vector;

class Reducere {
public:
    Reducere(const vector<Componenta> &COMPONENTA);

    Reducere(const vector<Angajat> &ANGAJATA);

    Reducere(const vector<Comanda> &COMANDA);

    void sale();

    void bonus();

    void sale2();

    ~Reducere();

private:
    vector<Angajat> angajati;
    vector<Componenta> componente;
    vector<Comanda> comenzi;
};


#endif //TEMA1_REDUCERE_H
