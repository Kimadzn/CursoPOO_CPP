#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Pessoa {
protected:
    string nome;
    int idade;

public:
    Pessoa(string _nome, int _idade);
    ~Pessoa();
    virtual void mostra();
};

Pessoa::Pessoa(string _nome, int _idade) {
    nome = _nome;
    idade = _idade;
}

Pessoa::~Pessoa() {
    cout << "Classe Pessoa Destruida" << endl;
}

void Pessoa::mostra() {
    cout << "Mostra Pessoa: " << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}
//Classe Filha
class Cliente : public Pessoa {
private:
    int salario;

public:
    Cliente(string _nome, int _idade, int _salario);
    void mostra();
};

Cliente::Cliente(string _nome, int _idade, int _salario) : Pessoa(_nome, _idade) {
    salario = _salario;
}

void Cliente::mostra() {
    Pessoa::mostra();

    cout << "Cliente Mostra: " << endl;
 //   cout << "Nome: " << nome << endl;
 //   cout << "Idade: " << idade << endl;
    cout << "Salario: " << salario << endl;
}

int main() {
    Cliente cliente = Cliente("Marcelo", 33, 1000);
    cliente.mostra();

    getch();
    return 0;
    getchar();
}
