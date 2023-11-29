#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <stdio.h>
#include <string>

using namespace std;


int main ()
{

string nome = "";
string sobrenome = "";


cout << "Entre com o seu nome: ";
getline(cin,nome);
cout << "Entre com o seu sobrenome: ";
cin >> sobrenome;

string nome_completo = nome + " " + sobrenome;
cout << "O nome completo eh :" << nome_completo;


return 0 ;

}