#include <iostream>
#include <stdlib.h>
#include "date.h"
#include "date.cpp"


int main (void)
{

    Date aniversairo {7, 11, 1985};
    aniversairo.set_day(70);
    std::cout<< "Aniversario do professor: ";
    aniversairo.print();

    std::cout<< "\nMes do aniversario "<< aniversairo.get_month()<<endl;

    return 0;
}