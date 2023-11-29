#ifndef MOTO_CORRIDA_H_INCLUDED
#define MOTO_CORRIDA_H_INCLUDED

#include <string>
#include <string.h>
//#include <iostream>
//#include <stdlib.h>

using namespace std;

class MotoCorrida {

  private:
    int numero;
    string piloto;
    int potencia;
    static float instensidadeChuva;

  public:
    int getNumero();
    void setNumero(int n);
    string getPiloto();
    void setPiloto(string p);
    int getPotencia();
    void setPotencia(int p);

    static float getInstensidadeChuva();
    static void setInstensidadeChuva(float ic);

};




#endif // MOTO_CORRIDA_H_INCLUDED
