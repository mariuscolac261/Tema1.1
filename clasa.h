//
// Created by colac on 10/28/2022.
//

#ifndef TEMA1_CLASA_H
#define TEMA1_CLASA_H

#include <iostream>
#include <string>

class clasa {
public:
    explicit clasa(const std::string &name, int price, const std::string brand);

private:
    std::string name;
    int price;
    std::string brand;
};


#endif //TEMA1_CLASA_H
