#include <string>
#include <string.h>

#include "moto_corrida.h"


using namespace std;

int MotoCorrida::getNumero() {
    return numero;
}

void MotoCorrida::setNumero(int n) {
    numero = n;
}

string MotoCorrida::getPiloto() {
    return piloto;
}

void MotoCorrida::setPiloto(string p) {
    piloto = p;
}

int MotoCorrida::getPotencia() {
    return potencia;
}

void MotoCorrida::setPotencia(int p) {
    potencia = p;
}

float MotoCorrida::getInstensidadeChuva() {
    return MotoCorrida::instensidadeChuva;
}

void MotoCorrida::setInstensidadeChuva(float ic) {
    MotoCorrida::instensidadeChuva = ic;
}



