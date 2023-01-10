#include <iostream>
#include "Programator.h"
int main()
{
 Programator p1{"3", {Contabil{"Adrian", 20, 80}.clone()}};
 Programator p2{"2", {Contabil{"Alex", 21, 90}.clone()}};
    Programator p3{"1", {Contabil{"Pavel", 30, 92}.clone()}};
    Programator p4{"3", {Contabil{"Ana", 21, 90}.clone()}};
    Programator p5{"3", {Contabil{"Victor", 27, 83}.clone()}};
    Programator p6{"2", {Contabil{"Bogdan", 24, 94}.clone()}};
    Programator p7{"1", {Contabil{"Daniel", 25, 92}.clone()}};
    Programator p8{"3", {Contabil{"Nicolae", 21, 96}.clone()}};
    Programator p9{"3", {Contabil{"Cristi", 20, 87}.clone()}};
    Programator p10{"2", {Contabil{"Ionut", 24, 85}.clone()}};
 std::cout <<  p1.salariuF() << "\n";
    std::cout <<  p2.salariuF() << "\n";
    std::cout <<  p3.salariuF() << "\n";
    std::cout <<  p4.salariuF() << "\n";
    std::cout <<  p5.salariuF() << "\n";
    std::cout <<  p6.salariuF() << "\n";
    std::cout <<  p7.salariuF() << "\n";
    std::cout <<  p8.salariuF() << "\n";
    std::cout <<  p9.salariuF() << "\n";
    std::cout <<  p10.salariuF() << "\n";

}