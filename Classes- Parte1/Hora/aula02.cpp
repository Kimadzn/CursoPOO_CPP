#include <iostream>
#include "tempo.h"
#include "tempo.cpp"

using namespace std;

int main() {
    Tempo padrao1;
    Tempo custom(11, 20, 36);

    cout << "Hora padrao: ";
    padrao1.imprime();

    cout << "\nHora customizada: ";
    custom.imprime();

    padrao1.setTempo(11, 25, 0);
    cout << "\nHora padrao atualizada: ";
    padrao1.imprime();
   
    return 0;
}
