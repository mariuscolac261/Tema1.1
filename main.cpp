#include <iostream>
#include "Programator.h"
int main()
{
 Programator p1{"3", {Contabil{"Adrian", 20, 80}.clone()}
};
 std::cout <<  p1.salariuF();
}