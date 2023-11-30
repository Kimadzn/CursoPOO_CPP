// arquivo de cabeçalho (HEADER)
#ifndef TEMPO_H
#define TEMPO_H

using namespace std;
class Tempo {
// Mebros privados
private:
    int hora, minuto, segundo; // mebro de dados
public:
    Tempo();//Construtor - inicializa (sempre mesmo nome da CLASS)
    Tempo (int, int, int);
    void setTempo (int, int, int);
    void imprime();
    ~Tempo() {};//Destrutor (sempre começa com ~)


};

#endif