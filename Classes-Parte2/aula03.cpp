#include <iostream>
#include <stdlib.h>
#include "date.h"
#include "date.cpp"


int main (void)
{

    Date aniversairo {7, 11, 1985};
    std::cout<< "Aniversario do professor: ";
    aniversairo.print();

    return 0;
}