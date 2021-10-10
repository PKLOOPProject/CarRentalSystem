#ifndef BOOKINGS_H
#define BOOKINGS_H
#include<string>
#include<iostream>
#include "Car.h"
#include "Driver.h"
using namespace std;
class Bookings
{
    public:
    string id_maker();
    string Booking_id;
    string Booking_name;
    string Booking_date;
    string Start_date;
    string End_date;
    bool Payment_status; 
    int remainder;
    Car assigned_car;


};
#endif