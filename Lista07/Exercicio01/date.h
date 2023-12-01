#ifndef DATE_H
#define DATE_H

#include <iomanip>

class Date {
private:
    int d, m, y;
    bool isValidDate(int day, int month, int year);


public:
    Date();
    Date(int dd, int mm, int yy);
    ~Date(); // In-Class
    int get_day() const { return d; }
    int get_month() const { return m; }
    int get_year() const { return y; }
    void print() const;

    void set_day(int day);
    void set_month(int month);
    void set_year(int year);
    void add_days(int daysToAdd);

private:
    void normalize();//caso de erro nos dias apos adicionar
};

#endif // DATE_H