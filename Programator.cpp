//
// Created by colac on 12/21/2022.
//

#include "Programator.h"

Programator::Programator(const std::string &typet, std::vector<std::shared_ptr<Angajati>> programatori)
        : typet(typet), programatori(programatori) {}


Programator::Programator(const Programator &other) : typet(other.typet) {
    for (const auto &Angajati: other.programatori)
        programatori.emplace_back(Angajati->clone());
}

Programator &Programator::operator=(Programator other) {
    std::swap(*this, other);
    return *this;
}

void swap(Programator &p1, Programator &p2) {
    std::swap(p1.programatori, p2.programatori);
    std::swap(p1.typet, p2.typet);
}

std::ostream &operator<<(std::ostream &os, const Programator &p) {
    os << "Tipul task-ului: " << p.typet << "\n";
    for(const auto &Angajati : p.programatori)
        os << *Angajati;
    os << "\n";
    return os;
}

double Programator::salariuF() const {
    float salary = 0;
    for (auto &Angajati: programatori)
        salary = Angajati->salariu();

    return salary;
}
