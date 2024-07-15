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

void Funksiya::CreateCar(vector<Car> &v)
{
   Car car;
   cout<<"Masinin novunu daxil edin :";
   cin>>car.novu;
   cout<<"Masinin markasini daxil edin :";
   cin>>car.marka;
   cout<<"Masinin suretini daxil edin :";
   cin>>car.speed;
   cout<<"Masinin at gucunu daxil edin :";
   cin>>car.horsestrong;
   cout<<"Masinin deyerini daxil edin :";
   cin>>car.price;
   cout<<"Masin sayini daxil edin :";
   cin>>car.count;

   v.push_back(car);
}

