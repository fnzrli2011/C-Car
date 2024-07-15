#include "Funksiya.hpp"
#include <iostream>

using namespace std;

void Funksiya::SelectCar(const string &name, Car &car, const vector<Car> &v) {
    for (const Car &c : v) {
        if (name == c.marka) {
            car = c;
            return;
        }
    }
    cout << "Masin tapilmadi." << std::endl;
}

