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
    int vet [] {1,2,3,4,5,6,7,8,9,10};

    cout << "Percorrendo Vetor da maneira normal : \n";

    for(int i = 0; i < 10 ; i ++){

        cout << vet[i] << "-";
    }

    cout << "\n\n Percorrendo com range-for\n";
// PARA CADA o FOR RANGE

    for(int x : vet){
        cout << x << "-";
    }
    

    return 0; 
}