#include <iostream>
#include "hora.h"
#include "hora.cpp"

int main() {
    Hora inicial(0, 0, 0);
    std::cout << "Tempo Inicial: ";
    inicial.print();
    std::cout << "\nTeste de funcoes GET (Pode ignorar Professor)";
    std::cout << "\nHora:" <<  inicial.get_hora() << std::endl;    
    std::cout << "Minuto:" <<  inicial.get_minuto() << std::endl;    
    std::cout << "Segundo:" <<  inicial.get_segundo() << std::endl;
    return 0;
}
