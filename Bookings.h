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
    void set_id(string lan);
    void set_name(string fullname);
    void set_sdate(string start);
    void set_edate(string end);
    void set_status(bool position);
    void set_chosencar();

    string get_id();
    string get_name();
    string get_sdate();
    string get_edate();
    bool get_status();
    Car get_chosencar();

    private:
    string Booking_id;
    string Booking_name;
    string Booking_date;
    string End_date;
    bool Payment_status; 
    Car assigned_car;

};
#endif
