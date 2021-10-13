#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include"Bookings.h"

string Bookings::id_maker(int info_booking, Bookings list[])
{
    cout<<"Your booking details are: "<<endl;
    cout<<"\t\t\tName: "<<list[info_booking].get_name()<<endl; 
    cout<<"\t\t\tBooking Start Date: "<<list[info_booking].get_sdate()<<endl;
    cout<<"\t\t\tBooking End Date: "<<list[info_booking].get_edate()<<endl;
    cout<<"\t\t\tBooking Status: "<<list[info_booking].get_status()<<endl;
    cout<<"\t\t\tBooking Remainder: "<<list[info_booking].get_remainder()<<endl;
}

string Booking::get_id()
{
    return Booking_id;
}
void Booking::set_id(string lan)
{
    Booking_id = lan;
}
string Booking::get_name()
{
    return Booking_name;
}
void Booking::set_name(string fullname)
{
    Booking_name = fullname;
}
string Booking::get_sdate()
{
    return Booking_date;
}
void Booking::set_sdate(string start)
{
    Booking_date = start;
}
string Booking::get_edate()
{
    return End_date;
}
void Booking::set_edate(string end)
{
    End_date = end;
}
bool Booking::get_status()
{
    return Payment_status;
}
void Booking::set_status(bool position)
{
    Payment_status = position;
}
