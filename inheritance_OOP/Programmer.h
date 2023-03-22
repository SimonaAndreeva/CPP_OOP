#ifndef UNTITLED1_PROGRAMMER_H
#define UNTITLED1_PROGRAMMER_H


#include <string>
#include <iostream>
#include <sstream>
#include <vector>

#include "Employee.h"

using std::string;
using std::ostream;
using std::istream;
using std::vector;
using std::stringstream;
using std::cout;

class Programmer: public Employee {
    public:
        Programmer();
        Programmer(string status, string name, float salary);
        Programmer(const Programmer &other);

        friend istream &operator >>(istream &is, Programmer &prOther) {
            string inputInfo;
            getline(is, inputInfo);

            stringstream str(inputInfo);
            vector<string> tokens;
            string token;

            while (getline(str, token, ',')) {
                tokens.push_back(token);
            }

            prOther.name = tokens[0];
            prOther.status = tokens[1];
            prOther.salary = stof(tokens[2]);

            return is;
        }

    string getName() const { return status + ", " + name; };

    Programmer& operator =(const Programmer &other) = default;


protected:
        string status;
};


#endif //UNTITLED1_PROGRAMMER_H
