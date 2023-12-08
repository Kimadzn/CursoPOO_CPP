#include "exercicio02/hora.h"
#include "exercicio01/date.h"
#include "exercicio02/hora.cpp"
#include "exercicio01/date.cpp"
#include <iostream>
#include <iomanip>

class DataHora : public Date, public Hora {
public:
   
    DataHora() : Date(1, 1, 1), Hora(0, 0, 0) {}

   
    DataHora(int ano, int mes, int dia, int hora, int minuto, int segundo) : Date(dia, mes, ano), Hora(hora, minuto, segundo) {}

   
    Hora diferencaDataHora(const DataHora& outraDataHora) const;

   
    Hora operator-(const DataHora& outraDataHora) const;

   
    friend std::ostream& operator<<(std::ostream& os, const DataHora& dataHora);
};

Hora DataHora::diferencaDataHora(const DataHora& outraDataHora) const {
    int diferencaDias = this->diferencaDiasEmRelacaoADataInicial() - outraDataHora.diferencaDiasEmRelacaoADataInicial();
    Hora diferencaHoras = this->Hora::operator-(outraDataHora);

   
    diferencaHoras.add_horario(Hora(diferencaDias * 24, 0, 0));

    return diferencaHoras;
}

Hora DataHora::operator-(const DataHora& outraDataHora) const {
    return diferencaDataHora(outraDataHora);
}

std::ostream& operator<<(std::ostream& os, const DataHora& dataHora) {
    os << std::setw(4) << std::setfill('0') << dataHora.get_year() << "/"
       << std::setw(2) << std::setfill('0') << dataHora.get_month() << "/"
       << std::setw(2) << std::setfill('0') << dataHora.get_day() << "-"
       << std::setw(2) << std::setfill('0') << dataHora.get_hora() << ":"
       << std::setw(2) << std::setfill('0') << dataHora.get_minuto() << ":"
       << std::setw(2) << std::setfill('0') << dataHora.get_segundo();
    return os;
}

int main() {
    DataHora dataHora1(1, 1, 1, 0, 0, 0);
    DataHora dataHora2(2023, 12, 7, 12, 0, 0);

    Hora diferenca = dataHora1 - dataHora2;

    std::cout << "Data e Hora 1: " << dataHora1 << std::endl;
    std::cout << "Data e Hora 2: " << dataHora2 << std::endl;
    std::cout << "Diferenca: " << diferenca << std::endl;

    return 0;
}
