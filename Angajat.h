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
    Angajat(const string &NAME, float SALLARY, int NRS);

    Angajat(const Angajat &other);

    Angajat &operator=(const Angajat &other);

    void setSallary(float SALLARY);

    float getSallary();

    void setNrs(int NRS);

    int getNrs();

    ~Angajat();

    friend ostream &operator<<(ostream &os, const Angajat &an);

private:
    string name;
    float sallary;
    int nrs;
};


#endif //TEMA1_ANGAJAT_H
