#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include"Bookings.h"

    void Truck::display_details(int selected_size,Truck list[])
    {
        cout<<"The truck you selected is "<<endl;
        cout<<"\t\t\tSize "<<list[selected_size].get_size()<<" cubic metres"<<endl;
        if (list[selected_size].get_status()==1)
        {
            cout<<"\t\t\tStatus: Avaliable"<<endl;
        }
        else if (list[selected_size].get_status()==0)
        {
            cout<<"Status: Unavaliable"<<endl;
        }
    }
    void Truck::set_size(int siz)
    {
        Truck_size=siz;
    }
    int Truck::get_size()
    {
        return Truck_size;
    }