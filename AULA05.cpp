#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <stdio.h>
#include <string>

using namespace std;

void soma (int *x, int *y, int *z)
{
    *z = *x+*y;
}

void soma2 (int &x, int &y, int &z)
{
    z= x + y;

}

int main ()
{

int a = 10, b = 20, c = 0;
soma (&a,&b,&c);
cout << "O valor de C (por referencia ponteiro) " << c << "\n";
soma2 (a, b ,c);
cout << "O valor de C (por referencia) " << c << "\n";

return 0 ;

}