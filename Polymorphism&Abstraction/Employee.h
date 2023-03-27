#ifndef C___EMPLOYEE_H
#define C___EMPLOYEE_H

#include <iostream>
#include <string>
using std::string;


class Employee {
public:
    Employee();
    Employee(string name, float salary, float experience);


protected:
    string name;
    float salary;
    float experience;
};


#endif //C___EMPLOYEE_H
