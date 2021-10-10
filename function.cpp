#include<iostream>
#include<string>
using namespace std;
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include"Bookings.h"

void carmenu(Car list[])
{
    int num=1;
    cout<<"\t\t\t----------------------------------------------\n";
    cout<<"\t\t\tWelcome to the OOP car rental Company ,Choose the car would like from the menu : "<<endl<<flush;
    for (int i = 0; i < 10; i++)
    {
        cout<<"\t\t\t";
        cout<<"Enter "<<num<<" - To Select "<<list[i].Vehicle_maker<<endl<<flush;
        num++;
    }
    
}

void start_carload(Car list[])
{
    string Car_list[10]={"Holden","Kia","Mercedes","Audi","Tesla","Mitsibishi","Volkswagun","Toyota","Nissan","Hyundai"};
    string Car_makelist[10]={"Commodore","Sorrento","S-Class","R8","Model 3","Outlander","Beetle","Corolla","Ultima", "Santa Fe"};
    string Car_color[10]={"White","Grey","Red","Yellow","Blue","Black","Purple","Pearl","Purple", "White"};
    string Car_type[10]={"Sedan","SUV","Sedan","Sedan","Hatchback","SUV","Hatchback","Sedan","Hatchback", "SUV"};
    bool Car_stat[10]={1,1,1,1,1,1,1,1,1,1};
    for (int i = 0; i < 10; i++)
    {
    list[i].Vehicle_maker=Car_list[i];
    list[i].Vehicle_model=Car_makelist[i];
    list[i].Vehicle_color=Car_color[i];
    list[i].Car_type=Car_type[i];
    list[i].Vehicle_status=Car_stat[i];
    }
}

void truckmenu(Truck Truck_list[])
{
    cout<<"\t\t\t----------------------------------------------\n";
    cout<<"\t\t\tWelcome to the OOP truck rental company ,Choose the truck you would like from the menu : "<<endl<<flush;
    int num=1;
    for (int i = 0; i < 10; i++)
    {
        cout<<"\t\t\t";
        cout<<"Enter "<<num<<" - To Select "<<Truck_list[i].Vehicle_maker<<endl<<flush;
        num++;
    }
}