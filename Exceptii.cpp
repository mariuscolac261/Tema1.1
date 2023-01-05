//
// Created by colac on 12/21/2022.
//

#include "Exceptii.h"

const char *eroare_salariu::what() const noexcept {
    return "eroare";
}

const char *eroare_depasire_limita::what() const noexcept{
    return "Salariul depaseste limita lunara!";
}