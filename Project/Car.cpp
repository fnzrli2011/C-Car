#include "Car.hpp"
#include <iostream>

using namespace std;

void Car::InfoCar() {
    cout << "Novu : " << novu << std::endl;
    cout << "Marka : " << marka << std::endl;
    cout << "Suret : " << speed << std::endl;
    cout << "At gucu : " << horsestrong << std::endl;
    cout << "Deyer : " << price << std::endl;
    cout << "Say : " << count << std::endl;
}

void Car::SellCar(float price, long long numofsell) {
    cout << "Xerclencek Pul : " << price * numofsell << std::endl;
}
