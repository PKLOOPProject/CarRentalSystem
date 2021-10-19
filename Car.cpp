#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include"Bookings.h"
void Car::display_details(int selected_car,Car list[])
{
    cout<<"The Car you selected is "<<endl;
    cout<<"\t\t\tCompany: "<<list[selected_car].get_maker()<<endl;
    cout<<"\t\t\tModel: "<<list[selected_car].get_model()<<endl;
    cout<<"\t\t\tColor: "<<list[selected_car].get_color()<<endl;
    if (list[selected_car].get_status()==1)
    {
        cout<<"\t\t\tStatus: Avaliable"<<endl;
    }
    else if (list[selected_car].get_status()==0)
    {
        cout<<"Status: Unavaliable"<<endl;
    }
    
    
}
string Car::get_car_type()
{
    return cartype;
}
void Car::set_car_type(string type)
{
    cartype=type;
}
