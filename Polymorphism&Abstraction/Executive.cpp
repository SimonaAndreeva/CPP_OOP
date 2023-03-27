
#include "Executive.h"

#include <utility>


Executive::Executive():Manager() {
}

Executive::Executive(string name, float salary, float experience, string department):
Manager(std::move(name), salary, experience, std::move(department)) {
}

void Executive::PrExecutive() {
    this->GetInfo();
    cout<<"Executive"<<endl;
}