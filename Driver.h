#ifndef DRIVER_H
#define DRIVER_H
#include<string>
#include<iostream>
using namespace std;
class Driver
{
    public:
    void add_user();
    string get_name();
    string get_phone();
    string get_email();
    string get_license();
    string get_status();
    string name;
    string phone_number;
    string license_number;
    string email;
    bool payment_status;
};
#endif