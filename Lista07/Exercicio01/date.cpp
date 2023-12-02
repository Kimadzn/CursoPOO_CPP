#include "date.h"
#include <iostream>

Date::Date(int dd, int mm, int yy) {
    if (isValidDate(dd, mm, yy)) {
        d = dd;
        m = mm;
        y = yy;
    } else {
        d = 1;
        m = 1;
        y = 1;
    }
    std:: cout << "\nObjeto Inciado\n";
}

/* void Date::add_days(int daysToAdd) {
    d += daysToAdd;
    normalize();
} */
Date Date::operator+(int days){

    this -> d = this -> d + days;
    normalize(); // Chamar a função de normalização
    return *this; // Retornar o objeto Date modificado
    

}


void Date::normalize() {
 while (d > 31 || m > 12) {
        if (d > 31) {
            d -= 31;
            m++;
        }
        if (m > 12) {
            m -= 12;
            y++;
        }
    }
}

Date::~Date() {
    std::cout << "\nObjeto Destruido\n";
}

void Date::print() const {
    std::cout << std::setw(2) << std::setfill('0') << d << "/"
              << std::setw(2) << std::setfill('0') << m << "/"
              << std::setw(4) << std::setfill('0') << y;
}

void Date::set_day(int value) {
    if (value > 0 && value <= 31)
        d = value;
}

void Date::set_month(int value) {
    if (value > 0 && value <= 12)
        m = value;
}

void Date::set_year(int value) {
    if (value >= 0)
        y = value;
}

bool Date::isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Verificar ano bissexto
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return (day <= 29 && month <= 12);
    } else {
        return (day <= daysInMonth[month]);
    }
}
