#ifndef OVERLOADING_MONEY_H
#define OVERLOADING_MONEY_H

#include <iostream>

using std::istream;
using std::ostream;

class Money {
public:
    Money();
    Money(int Levove, int stotinki);

    int getlevove() const;
    int getStotinki() const;

    Money operator +(const Money &other);
    Money operator -(const Money &other);
    Money operator *(const Money &other);
    Money operator /(int x);

    bool operator >(const Money &other);
    bool operator <(const Money &other);
    bool operator ==(const Money &other);
    bool operator !=(const Money &other);
    bool operator >=(const Money &other);
    bool operator <=(const Money &other);


    friend istream &operator >>(istream  &input, Money &m) {
        char dot;
        input >> m.Levove >> dot >> m.stotinki;
        return input;
    }

    friend ostream &operator <<(ostream  &output, Money &m) {
        output << m.Levove << '.' << m.stotinki;
        return output;
    }
private:
    int Levove;
    int stotinki;

};

