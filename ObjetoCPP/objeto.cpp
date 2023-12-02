#include <iostream>
#include <string>

using namespace std;

class Pessoa{ 
    public:
        int id;
        string nome;
        int idade;

};

int main (){

    Pessoa amigo;
    
    amigo.id = 1; 
    amigo.nome = "Pedro"; 
    amigo.idade = 20; 

    cout << "ID " << amigo.id << endl;
    cout << "Nome " << amigo.nome << endl;
    cout << "Idade " << amigo.idade << endl;
    
    return 0;
}