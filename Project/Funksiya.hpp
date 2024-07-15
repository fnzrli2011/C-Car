#ifndef FUNKSIYA_HPP
#define FUNKSIYA_HPP

#include <vector>
#include "Car.hpp"

using namespace std;

class Funksiya {
public:
    static void SelectCar(const string &name, Car &car, const vector<Car> &v);
};

#endif
