#ifndef UNTITLED1_EMPLOYEE_H
#define UNTITLED1_EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
    public:
        Employee();
        Employee(string name, float salary);
        Employee(const Employee &other);

        Employee& operator = (const Employee &other) = default;

        float getSalary() const {
            return salary;
        }
    protected:
        string name;
        float salary;

};


#endif //UNTITLED1_EMPLOYEE_H
