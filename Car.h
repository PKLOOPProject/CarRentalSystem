#ifndef CAR_H
#define CAR_H
#include<string>
#include<iostream>
#include "Vehicle.h"
using namespace std;
class Car: public Vehicle
{
    public:
    void display_details(int selected_car,Car list[]);
    int get_car_seats();
    void set_car_seats(int number);
    string get_car_type();
    void set_car_type(string type);
    private:
    int carseats;
    string cartype;
    
};
#endif