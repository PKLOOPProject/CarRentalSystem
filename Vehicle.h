#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    virtual void display_details();
    void set_model(string mod);
    void set_maker(string company);
    void set_color(string colour);
    void set_status(bool stat);
    int set_price(int pric);
    string get_model();
    string get_maker();
    string get_color();
    bool get_status();
    int get_price();
    private:
    string Vehicle_model;
    string Vehicle_maker;
    string Vehicle_color;
    bool Vehicle_status;
    int vehicle_price;

};
#endif