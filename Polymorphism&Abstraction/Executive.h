#ifndef C___EXECUTIVE_H
#define C___EXECUTIVE_H

#include "Manager.h"

#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;



class Executive: public Manager {
public:
    Executive();
    Executive(string name, float salary, float experience, string department);

    void PrExecutive();

};


#endif //C___EXECUTIVE_H
