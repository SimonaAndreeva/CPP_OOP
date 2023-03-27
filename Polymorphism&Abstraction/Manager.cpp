#include "Manager.h"

#include <iostream>
#include <utility>


Manager::Manager() {
    this->department = "";
}

Manager::Manager(string name, float salary, float experience, string department): Employee(std::move(name), salary, experience) {
    this->department = std::move(department);
}

void Manager::GetInfo() {
    std::cout<<
    this->name <<", "<<
    this->salary <<", "<<
    this->experience <<", "<<
    this->department <<", "<< std::endl;
}