#include "complexo.h"
#include <iostream>

Complexo::Complexo(float r, float i) : re(r), im(i) {}

void Complexo::print() const {
    std::cout << re << " + (" << im << ")i";
}

Complexo Complexo::operator+(const Complexo& par) const {
    float x = this->re + par.re;
    float y = this->im + par.im;
    return Complexo(x, y);
}

Complexo Complexo::operator-(const Complexo& par) const {
    float x = this->re - par.re;
    float y = this->im - par.im;
    return Complexo(x, y);
}
