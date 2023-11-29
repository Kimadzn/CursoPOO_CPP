#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <stdio.h>
#include <string>

using namespace std;


int main ()
{

int a = 50;

cout << "Valor de A " << a << "\n";
cout << "Endereco de A " << &a << "\n";

int *ptr_a = nullptr;
ptr_a = &a;

cout << "o valor do ptr (Endereco de A )  " << ptr_a << "\n";
cout << "o valor pontado por ptr   " << *ptr_a << "\n";

int &refa =  a; 
cout << "Valor apontado pela RefA " << refa << "\n";


return 0 ;

}