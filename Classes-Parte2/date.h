#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date {
private:
    int d, m, y;

public:
    Date(int day = 1, int month = 1, int year = 0001);
    ~Date(); // In-Class
    int get_day() {return d;}
    int get_month() {return m;}
    int get_year(){return y;}
    void print();

    void set_day(int day);
    void set_month(int month);
    void set_year(int year);
};

#endif // DATE_H
