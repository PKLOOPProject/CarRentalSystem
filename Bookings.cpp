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
    cout << "Please enter your name: " << endl;
    cin >> Booking_name;

    cout << "Please enter your booking date: " << endl;
    cin >> Booking_date;

    cout << "Please enter your booking end date: " << endl;
    cin >> End_date;
}

string Bookings::id_maker(int info_booking, Bookings list[])
{
    cout<<"Your booking details are: "<<endl;
    cout<<"\t\t\tName: "<<list[info_booking].get_name()<<endl; 
    cout<<"\t\t\tBooking Start Date: "<<list[info_booking].get_sdate()<<endl;
    cout<<"\t\t\tBooking End Date: "<<list[info_booking].get_edate()<<endl;
    cout<<"\t\t\tBooking Status: "<<list[info_booking].get_status()<<endl;
    cout<<"\t\t\tBooking Remainder: "<<list[info_booking].get_remainder()<<endl;
}