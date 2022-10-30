#include <iostream>
#include "Componenta.h"
#include "Reducere.h"
#include <vector>

int main() {
    std::vector<Componenta> componente;
    componente.push_back({"gpu", 2000, "Nvidia"});
    Reducere r1{componente};
    r1.sale();


}
