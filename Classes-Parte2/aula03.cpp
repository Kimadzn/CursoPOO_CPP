#include <iostream>
#include <stdlib.h>
#include "date.h"
#include "date.cpp"


int main (void)
{

    Date inicial {1, 1, 0001};
    std::cout<< "Data Inicial: ";
    inicial.print();

    std::cout<< "\nMes do aniversario "<< inicial.get_month()<<endl;

    return 0;
}