//
// Created by colac on 10/28/2022.
//

#ifndef TEMA1_ANGAJAT_H
#define TEMA1_ANGAJAT_H

#include <iostream>
#include <string>
#include <utility>

using std::string;
using std::ostream;

class Angajat {
public:
    Angajat(const string &NAME, const string ACTIVITY);

    Angajat(const Angajat &other);

    Angajat &operator=(const Angajat &other);

    friend ostream &operator<<(ostream &COUT, const Angajat &a1);

    ~Angajat();

private:
    string name;
    string activity;
};


#endif //TEMA1_ANGAJAT_H
