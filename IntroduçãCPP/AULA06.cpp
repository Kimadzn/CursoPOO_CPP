#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#define SIZE 50

using namespace std;



int main ()
{

    int *vet = nullptr;

    vet = new int[SIZE];

    for (int i = 0; i <SIZE ; i++)
    {
        vet [i] = rand() % 10;
    }

    cout << "Vetor Dinamico Criado\n" << endl;

    for(int i = 0; i<SIZE; i++)
    {
        cout << vet[i] << " ";
    }

delete[] vet;

return 0 ;

}