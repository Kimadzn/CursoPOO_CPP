#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
private:
    float re, im;

public:
    Complexo(float r = 0.0, float i = 0.0);
    ~Complexo() {};

    // Interface
    void print() const;

    // Sobrecarga de operadores
    Complexo operator+(const Complexo& par) const;
    Complexo operator-(const Complexo& par) const;
};

#endif // COMPLEXO_H
