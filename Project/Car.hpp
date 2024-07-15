#ifndef CAR_H_
#define CAR_H_
#include <bits/stdc++.h>

using namespace std;

class Car{


    public:
        string novu;
        string marka;
        float speed;
        float horsestrong;
        float price;
        long long count;
        long long numofsell;

        void InfoCar();
        void SellCar(float price,long long numofsell);

};

#endif /* CAR_H_ */
