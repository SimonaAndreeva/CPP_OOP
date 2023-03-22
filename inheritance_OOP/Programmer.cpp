#include "Programmer.h"
#include <string>
#include <utility>

using std::string;

Programmer::Programmer(): Employee() {
    this -> status = " ";
}

Programmer::Programmer(string status, string name, float salary): Employee(std::move(name), salary) {
    this -> status = std::move(status);
}

Programmer::Programmer(const Programmer &other): Employee(other) {
    this -> status = other.status;
}
