#ifndef HORA_H
#define HORA_H

#include <iostream>

class Hora {
private:
    int h, m, s;
    void normalize(); // caso de erro nos minutos e segundos após adicionar

public:
    Hora();
    Hora(int hh, int mm, int ss);
    ~Hora(); // In-Class
    void print();
    int get_hora() const { return h; }
    int get_minuto() const { return m; }
    int get_segundo() const { return s; }

    // Adição de um horário ao horário armazenado
    void add_horario(const Hora& horario);

    // Subtração de um horário passado do horário armazenado
    Hora diferenca_horarios(const Hora& horario) const;

    // Sobrecarga do operador +
    Hora operator+(const Hora& horario) const;

    // Sobrecarga do operador -
    Hora operator-(const Hora& horario) const;

    // Método amigo para retorno de uma stream de saída
    friend std::ostream& operator<<(std::ostream& os, const Hora& horario);
};

#endif // HORA_H
