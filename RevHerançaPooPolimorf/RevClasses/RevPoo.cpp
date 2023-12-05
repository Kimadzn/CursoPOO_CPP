#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Pessoa {
private:
    int id;
    string nome;
    int idade;

public:
    Pessoa(int _id, string _nome, int _idade);
    void setIdade(int _idade);
    int getIdade();
    void setId(int _id);
    int getId();
    void setNome(string _nome);
    string getNome();
};
Pessoa::Pessoa(int _id, string _nome, int _idade){
    id = _id;
    nome = _nome;
    idade = _idade;
}



void Pessoa::setIdade(int _idade) {
    idade = _idade;
}

int Pessoa::getIdade() {
    return idade;
}

void Pessoa::setId(int _id) {
    id = _id;
}

int Pessoa::getId() {
    return id;
}

void Pessoa::setNome(string _nome) {
    nome = _nome;
}

string Pessoa::getNome() {
    return nome;
}

int main() {
    Pessoa amigo = Pessoa(1, "joao", 30);
   /*  amigo.setNome("Pedro");
    amigo.setId(1);
    amigo.setIdade(20); */
    cout << "Nome: " << amigo.getNome() << endl;
    cout << "Idade: " << amigo.getIdade() << endl;
    cout << "id: " << amigo.getId() << endl;
    getch();
    return 0;
}
