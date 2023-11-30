#include <iostream>
#include "circle.h"
#include "circle.cpp"

using namespace std;

int main(){

    Circle c1;
    Circle c2(15.7, 8.9, -5.1);
    Circle c3(7.7);


    cout << "\nCircle c1: \n";
    c1.imprime();
    

    cout << "\nCircle c2: \n";
    c2.imprime();
    
    cout << "\nCircle c3: \n";
    c3.imprime();
    return 0;
}