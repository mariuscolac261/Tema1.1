#include <iostream>
#include "Componenta.h"
#include "Reducere.h"
#include <vector>

int main() {
    std::vector<Componenta> componente;
    componente.push_back({"gpu", 1001, "Nvidia"});
    Reducere r1{componente};
    std::cout << r1.reducere();


}
