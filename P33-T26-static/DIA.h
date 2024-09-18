#pragma once
#include "carnumber.h"
#include <vector>
#include <algorithm>
using namespace std;

class DIA
{
    vector<CarNumber> cars;
public:
    DIA();

    void takeCar(string car);
    int getAmountOfCars() const;
    CarNumber operator[](int n);
};
