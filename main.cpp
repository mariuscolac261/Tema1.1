#include "Componenta.h"
#include "Reducere.h"
#include "Angajat.h"
#include <vector>

int main() {
    std::vector<Componenta> componente;
    std::vector<Comanda> comenzi;
    std::vector<Angajat> angajati;
    componente.push_back(Componenta("gpu", 2000, "nvidia"));
    comenzi.push_back(Comanda(2600, 6));
    angajati.push_back(Angajat("abc", 2000, 52));
    componente.push_back(Componenta("gpu", 3000, "nvidia"));
    comenzi.push_back(Comanda(3100, 6));
    angajati.push_back(Angajat("efg", 3200, 52));
    Reducere r1{componente};
    Reducere r2{comenzi};
    Reducere r3{angajati};
    r1.sale();
    r2.sale2();
    r3.bonus();

}
