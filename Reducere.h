//
// Created by colac on 10/29/2022.
//

#ifndef TEMA1_REDUCERE_H
#define TEMA1_REDUCERE_H

#include <iostream>
#include <string>
#include <utility>
#include "Componenta.h"
#include <vector>

using std::string;
using std::vector;

class Reducere {
public:
    explicit Reducere(const vector<Componenta> &componente);

    int reducere() const;

    ~Reducere();

private:
    vector<Componenta> componente;
};


#endif //TEMA1_REDUCERE_H
