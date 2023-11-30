#include <iostream>
#include <string>

using namespace std; // Adiciona using namespace std para usar std::string

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout<<"Name - "<< Name << endl;
        std::cout<<"Company - "<< Company << endl;
        std::cout<<"Age - "<< Age << endl;
        std::cout<<"\n"<<endl;
    }
    Employee(string name, string company, int age){ // Construtor (tem  que ter o mesmo nome da CLASSE)
        Name = name;
        Company = company;
        Age = age;
        
    }
};

int main() {

Employee employee1 = Employee("Arthur", "Aed", 20);
Employee employee2 = Employee("Jhon", "Aamazon", 32);
/*  Employee employee1; 
    employee1.Name = "Arthur";
    employee1.Company = "AED1";
    employee1.Age = 20; 

    Employee employee2; 
    employee2.Name = "Jhonn";
    employee2.Company = "Amazon";
    employee2.Age = 32;  */

    employee1.IntroduceYourself();
    employee2.IntroduceYourself();

    return 0;
}
