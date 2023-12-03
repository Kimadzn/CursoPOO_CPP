#include "complexo.h"
#include "complexo.cpp"
#include <iostream>

int main() {
    Complexo n1(10, 20);
    Complexo n2(5, 15);

    std::cout << "n1 = ";
    n1.print();
    std::cout << std::endl;

    std::cout << "n2 = ";
    n2.print();
    std::cout << std::endl;

    Complexo n3, n4;
    n3 = n1 + n2;
    n4 = n1 - n2;

    std::cout << "n3 (add) = ";
    n3.print();
    std::cout << std::endl;

    std::cout << "n4 (sub) = ";
    n4.print();
    std::cout << std::endl;

    return 0;
}
