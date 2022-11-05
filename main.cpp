#include <iostream>
#include "Componenta.h"
#include "Reducere.h"
#include "Angajat.h"
#include "Componenta.h"
#include <vector>

int main() {
    std::vector<Componenta> componente;
    std::vector<Comanda> comenzi;
    std::vector<Angajat> angajati;
    componente.push_back({"gpu", 2000, "Nvidia"});
    comenzi.push_back({2600, 6});
    angajati.push_back({"abc", 2000, 52});
    Reducere r1{componente};
    Reducere r2{comenzi};
    Reducere r3{angajati};
    r1.sale();
    r2.sale2();
    r3.bonus();

}
