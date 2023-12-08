#include "hora.h"
#include <iostream>
#include <iomanip>
#include "hora.h"

Hora::Hora() : h(0), m(0), s(0) {
    std::cout << "\nObjeto Iniciado\n";
}

Hora::Hora(int hh, int mm, int ss) : h(hh), m(mm), s(ss) {
    normalize();
    std::cout << "\nObjeto Iniciado\n";
}

void Hora::normalize() {
    while (m >= 60 || s >= 60) {
        if (s >= 60) {
            s -= 60;
            m++;
        }
        if (m >= 60) {
            m -= 60;
            h++;
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

void Hora::add_horario(const Hora& horario) {
    h += horario.h;
    m += horario.m;
    s += horario.s;
    normalize();
}

Hora Hora::diferenca_horarios(const Hora& horario) const {
    int segundosTotaisAtual = h * 3600 + m * 60 + s;
    int segundosTotaisHorario = horario.h * 3600 + horario.m * 60 + horario.s;
    int diferencaSegundos = segundosTotaisAtual - segundosTotaisHorario;

    int horasResultantes = diferencaSegundos / 3600;
    int minutosResultantes = (diferencaSegundos % 3600) / 60;
    int segundosResultantes = diferencaSegundos % 60;

    return Hora(horasResultantes, minutosResultantes, segundosResultantes);
}

Hora Hora::operator+(const Hora& horario) const {
    Hora resultado(*this);
    resultado.add_horario(horario);
    return resultado;
}

Hora Hora::operator-(const Hora& horario) const {
    return diferenca_horarios(horario);
}

std::ostream& operator<<(std::ostream& os, const Hora& horario) {
    os << std::setw(2) << std::setfill('0') << horario.h << ":"
       << std::setw(2) << std::setfill('0') << horario.m << ":"
       << std::setw(2) << std::setfill('0') << horario.s;
    return os;
}
