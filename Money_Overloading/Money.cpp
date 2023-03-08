#ifndef OVERLOADING_MONEY_H
#define OVERLOADING_MONEY_H

#include <iostream>
#include "Money.h"

using std::istream;
using std::ostream;

Money::Money() {
    levove = 0;
    stotinki = 0;
}

Money::Money(int l, int s) {
    levove = l;
    stotinki = s;
}


int Money::getlevove() const {
    return levove;
}

int Money::getStotinki() const {
    return stotinki;
}


Money Money::operator +(const Money &other) {
    int currentlevove = levove + other.levove;
    int currentStotinki = stotinki + other.stotinki;

    if (currentStotinki >= 100) {
        currentlevove += 1;
        currentStotinki -= 100;
    }

    return Money(currentlevove, currentStotinki);
}

Money Money::operator -(const Money &other) {
    int curretnlevove = levove - other.levove;
    int currentStotinki = stotinki - other.stotinki;

    if(currentStotinki<0) {
        currentlevove--;
        currentStotinki = 100 + currentStotinki;
    }

    return Money(currentlevove, currentStotinki);
}

Money Money::operator *(int num) {
    int currentlevove = leva* num;
    int currentStotinki = stotinki * num;

    if(currentStotinki >= 100 ) {
        currentlevove = currentlevove + (currentStotinki / 100);
        currentStotinki = currentStotinki + (currentStotinki % 100);
    }

    return Money(currentlevove, currentStotinki);
}

Money Money::operator /(int num) {
    int currentlevove = levove / num;
    int currentStotinki = (stotinki + (levove % num)) / num;

    return Money(currentlevove, currentStotinki);
}

bool Money::operator >(const Money &other) {
    if(levove > other.levove) {
        return true;
    }

    else if(levove==other.levove && stotinki> other.stotinki) {
        return true;
    }

    else {
        return false;
    }
}


bool Money::operator <(const Money &other) {
    if(levove < other.levove) {
        return true;
    }

    else if(levove==other.levove && stotinki< other.stotinki) {
        return true;
    }

    else {
        return false;
    }
}

bool Money::operator =(const Money &other) {
    return (levove == other.levove && stotinki == other.stotinki);
}

bool Money::operator !=(const Money &other) {
    return (levove != other.levove && stotinki != other.stotinki);
}

bool Money::operator >=(const Money &other) {
    if(levove > other.levove) {
        return true;
    }

    else if(levove==other.levove && stotinki >= other.stotinki) {
        return true;
    }

    else {
        return false;
    }
}


bool Money::operator <=(const Money &other) {
    if(levove < other.levove) {
        return true;
    }

    else if(levove==other.levove && stotinki <= other.stotinki) {
        return true;
    }

    else {
        return false;
    }
}