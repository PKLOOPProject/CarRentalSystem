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
    cout<<"Company: "<<list[selected_car].Vehicle_maker<<endl;
    cout<<"Model: "<<list[selected_car].Vehicle_model<<endl;
    cout<<"Color: "<<list[selected_car].Vehicle_color<<endl;
    if (list[selected_car].Vehicle_status==1)
    {
        cout<<"Status: Avaliable";
    }
    else if (list[selected_car].Vehicle_status==0)
    {
        cout<<"Status: Unavaliable";
    }
    
    
}