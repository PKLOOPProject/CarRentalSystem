#ifndef BOOKINGS_H
#define BOOKINGS_H
#include<string>
#include<iostream>
#include "Car.h"
using namespace std;
class Bookings
{
    public:
    void get_booking_info(int info_booking, Bookings list[]);
    void set_id(string lan);
    void set_firstname(string firstname);
    void set_lastname(string lastname);
    void set_sdate(int date);
    void set_smonth(int month);
    void set_edate(int end);
    void set_emonth(int month);
    void set_status(bool position);
    void set_chosencar(Car chosen);

    string get_id();
    string get_firstname();
    string get_lastname();
    int get_sdate();
    int get_smonth();
    int get_edate();
    int get_emonth();
    bool get_status();
    Car get_chosencar();

    private:
    string Booking_id;
    string Booking_firstname;
    string Booking_lastname;
    int Booking_date;
    int Booking_month;
    int End_month;
    int End_date;

};
#endif
