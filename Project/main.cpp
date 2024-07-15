#include <bits/stdc++.h>
#include "Car.hpp"
#include "Funksiya.hpp"

using namespace std;

int main() {

    Car car;

    Car car1;
    car1.novu = "Minik Masini";
    car1.marka = "BMW";
    car1.speed = 250;
    car1.horsestrong = 3500;
    car1.price = 20500;
    car1.count = 12;

    Car car2;
    car2.novu = "Minik Masini";
    car2.marka = "Mercedes";
    car2.speed = 250;
    car2.horsestrong = 3500;
    car2.price = 20000;
    car2.count = 12;

    vector<Car> v;
    v.push_back(car1);
    v.push_back(car2);

    bool choice = true;
    while (choice) {
        cout<<"Masin yaratmaq ve ya programa masin daxil etmek ucun 1 e basin"<<endl;
        cout << "Masin haqqinda melumat ucun 2 e basin" << endl;
        cout << "Masin secmek ucun 3 ye basin" << endl;
        cout << "Masin almaq ucun 4 e basin" << endl;
        cout << "Cixis ucun 5 e basin" << endl;
        cout << endl;

        int a;
        cin >> a;

        if(a==1)
        {
         Funksiya::CreateCar(v);
         cout<<endl;
        }
        else if (a == 2) {
            car.InfoCar();
            cout << endl;
        } else if (a == 3) {
            cout << "Masin markasi daxil edin: ";
            string marka;
            cin >> marka;
            cout << endl;
            Funksiya::SelectCar(marka, car, v);
            if (!car.marka.empty()) {
                cout<<"Secile masin:"<<car.marka<<endl<<endl;
            }
        } else if (a == 4) {
            cout << "Nece Masin Alcaqsiniz: ";
            long long numofsell;
            cin >> numofsell;
            car.SellCar(car.price, numofsell);
            cout << endl;
        } else if (a == 5) {
            cout << "Cixis edildi" << endl;
            return 0;
        } else {
            cout << "Bele bir duyme yoxdu" << endl << endl;
        }
    }
    return 0;
}
