#include <iostream>
#include "hora.h"
#include "hora.cpp"

int main() {
    Hora inicial(0, 0, 0);
    std::cout << "Hora Inicial: ";
    inicial.print();
    std::cout << "\n";

    Hora adicionar(2, 15, 20);
    inicial.add_horario(adicionar);
    std::cout << "Hora apos adicionar: " << inicial << "\n";

    Hora horarioPassado(0, 0, 0);
    Hora diferenca = inicial - horarioPassado;
    std::cout << "Diferenca de horarios: " << diferenca << "\n";

    return 0;
}
