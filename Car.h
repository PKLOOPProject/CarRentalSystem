#ifndef CAR_H
#define CAR_H
#include<string>
#include<iostream>
#include "Vehicle.h"
using namespace std;
class Car: public Vehicle
{
    public:
    void add_car(string model, string maker, string color, string type, string seat_count);
    string Car_seats;
    string Car_type;

};
#endif