//
// Created by colac on 12/21/2022.
//

#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include "Contabil.h"


class Programator {
private:
    std::string typet;
    std::vector<std::shared_ptr<Angajati>> programatori;

public:
    explicit Programator(const std::string &typet, std::vector<std::shared_ptr<Angajati>> programatori);

    Programator(const Programator &other);

    Programator &operator=(Programator other);

    friend void swap(Programator &p1, Programator &p2);

    friend std::ostream &operator<<(std::ostream &os, const Programator &p);
    double salariuF() const;





};




