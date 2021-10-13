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
    string id_maker(int info_booking, Bookings list[]);
    void set_id();
    void set_name();
    void set_sdate();
    void set_edate();
    void set_status();
    void set_remainder();
    void set_chosencar();

    string get_id();
    string get_name();
    string get_sdate();
    string get_edate();
    bool get_status();
    int get_remainder();
    Car get_chosencar();

    private:
    string Booking_id;
    string Booking_name;
    string Booking_date;
    string End_date;
    bool Payment_status; 
    int remainder;
    Car assigned_car;

};
#endif
