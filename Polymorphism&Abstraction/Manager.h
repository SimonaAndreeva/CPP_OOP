#ifndef C___MANAGER_H
#define C___MANAGER_H

#include "Employee.h"
#include <string>

class Manager: public Employee {
public:
    Manager();
    Manager(string name, float salary, float experience, string department);

    void GetInfo();

protected:
    string department;
};


#endif //C___MANAGER_H
