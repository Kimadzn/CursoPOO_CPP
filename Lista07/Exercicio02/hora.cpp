#include "hora.h"
#include <iostream>
#include <iomanip>


Hora::Hora(int hh, int mm, int ss) {
        h = hh;
        m = mm;
        s = ss;

    std:: cout << "\nObjeto Inciado\n";
}

void Hora::normalize() {
 while (h > 60 || m > 60) {
        if (h > 60) {
            h -= 60;
            m++;
        }
        if (m > 60) {
            m -= 60;
            s++;
        }
    }
}

Hora::~Hora() {
    std::cout << "\nObjeto Destruido\n";
}

void Hora::print() {
    std::cout << std::setw(2) << std::setfill('0') << h << ":"
              << std::setw(2) << std::setfill('0') << m << ":"
              << std::setw(2) << std::setfill('0') << s;
}
