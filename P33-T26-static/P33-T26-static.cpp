#include "CarNumber.h"

int CarNumber::counter = 0;
char CarNumber::firstLetter = 'A';
char CarNumber::secondLetter = 'A';

int main()
{
    CarNumber arr[5]; // 0001AA 0002AA 0003AA 0004AA 0005AA
    // 5 A A

    for (CarNumber item : arr) {
        cout << item.getNumber() << "\n";
    }
    cout << "counter: " << CarNumber::getCounter() << "\n";
    cout << "first: " << CarNumber::getFirstLetter() << "\n";
    cout << "second: " << CarNumber::getSecondLetter() << "\n";
}

