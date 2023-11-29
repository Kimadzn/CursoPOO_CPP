#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <stdio.h>

using namespace std;

int square (int num){
    return num*num;
}

int main ()
{
    int n = 0;

    cout << "Entre com um inteiro : ";
    cin >> n;
    cout << "Resultado do quadrado do numero digitado = : " << square(n) << "\n";

    

    return 0; 
}