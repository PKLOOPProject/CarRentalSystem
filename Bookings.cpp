#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include"Bookings.h"

void Bookings::get_booking_info(int info_booking, Bookings list[])
{
    cout<<"Your booking details are: "<<endl;
    cout<<"\t\t\tName: "<<list[info_booking-1].get_firstname()<<" "<<list[info_booking-1].get_lastname()<<endl; 
    cout<<"\t\t\tBooking Start Date: "<<list[info_booking-1].get_sdate()<<"-"<<list[info_booking-1].get_smonth()<<endl;
    cout<<"\t\t\tBooking End Date: "<<list[info_booking-1].get_edate()<<"-"<<list[info_booking-1].get_emonth()<<endl;
}
string Bookings::get_id()
{
    return Booking_id;
}
void Bookings::set_id(string lan)
{
    Booking_id = lan;
}
string Bookings::get_firstname()
{
    return Booking_firstname;
}
void Bookings::set_firstname(string firstname)
{
    Booking_firstname = firstname;
}
int Bookings::get_sdate()
{
    return Booking_date;
}
void Bookings::set_sdate(int start)
{
    Booking_date = start;
}
int Bookings::get_edate()
{
    return End_date;
}
void Bookings::set_edate(int end)
{
    End_date = end;
}
void Bookings::set_smonth(int month)
{
    Booking_month=month;
}
int Bookings::get_smonth()
{
    return Booking_month;
}
int Bookings::get_emonth()
{
    return End_month;
}
void Bookings::set_emonth(int month)
{
    End_month=month;
}
string Bookings::get_lastname()
{
    return Booking_lastname;
}
void Bookings::set_lastname(string lastname)
{
    Booking_lastname=lastname;
}