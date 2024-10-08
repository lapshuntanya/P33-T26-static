#include "CarNumber.h"

CarNumber::CarNumber()
{
    counter++;
    if (counter > 9999) {
        counter = 1;
        secondLetter++;
        if (secondLetter > 'Z') {
            secondLetter = 'A';
            firstLetter++;
        }
    }
    //               0 0 0 1
    number = to_string(counter / 1000) + to_string(counter / 100 % 10) +
        to_string(counter / 10 % 10) + to_string(counter % 10)
        + firstLetter + secondLetter;
}

string CarNumber::getNumber() const{    
    return number;
}

int CarNumber::getCounter() {
    return counter;
}

char CarNumber::getFirstLetter() {
    return firstLetter;
}

char CarNumber::getSecondLetter() {
    return secondLetter;
}

void CarNumber::setCounter(int n) {
    counter = n;
}

void CarNumber::setFirst(char a) {
    firstLetter = a;
}

void CarNumber::setSecond(char b) {
    secondLetter = b;
}

 