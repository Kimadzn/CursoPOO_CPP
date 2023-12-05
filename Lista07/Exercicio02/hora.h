#ifndef HORA_H
#define HORA_H

#include <iostream>

class Hora {
private:
    int h, m, s;
    void normalize(); // caso de erro nos dias após adicionar

public:
    Hora();
    Hora(int hh, int mm, int ss);
    ~Hora(); // In-Class
    void print();
    int get_hora() const {return h;}
    int get_minuto() const {return m;}
    int get_segundo() const {return s;}
};

#endif // HORA_H
