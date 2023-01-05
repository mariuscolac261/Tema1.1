//
// Created by colac on 12/21/2022.
//

#ifndef TEMA2POO_EXCEPTII_H
#define TEMA2POO_EXCEPTII_H

#include <exception>

class eroare_salariu: public std::exception{
public:
    [[nodiscard]] const char* what() const noexcept override;
};

class eroare_depasire_limita : public eroare_salariu{
public:
    [[nodiscard]] const char* what() const noexcept override;
};



#endif //TEMA2POO_EXCEPTII_H
