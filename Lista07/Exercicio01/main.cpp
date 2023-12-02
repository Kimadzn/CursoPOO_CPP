#include <iostream>
#include "date.h"
#include "date.cpp"

int main() {
    Date inicial(1, 1, 1);
    std::cout << "Data Inicial: ";
    inicial.print();
    std::cout << "\nTeste de funcoes GET (Pode ignorar Professor)";
    std::cout << "\nDia:" <<  inicial.get_day() << std::endl;    
    std::cout << "Mes:" <<  inicial.get_month() << std::endl;    
    std::cout << "Ano:" <<  inicial.get_year() << std::endl;
    std::cout << "\nEscreva quantos dias para adicionar no calendario\n";
    int numeroDiasAdd = 0;
    std::cin >> numeroDiasAdd;  
    /* inicial.set_day(inicial.get_day () + numeroDiasAdd) ; */
    /* inicial.add_days(numeroDiasAdd); */
    Date novaData = inicial + numeroDiasAdd;

    std::cout << "Data apos adicionar " << numeroDiasAdd << " dias\n";
    inicial.print();
    

    

    return 0;
}
