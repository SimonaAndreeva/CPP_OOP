#include <iostream>
#include "Money.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Money price;
    Money priceOne = Money(5, 20);
    int x = 2;

    Money priceTwo = priceOne / x;


    cin >> price;

    cout << priceTwo << endl;

    return 0;
}