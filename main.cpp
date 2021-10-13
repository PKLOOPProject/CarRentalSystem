#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include"Bookings.h"

extern void carmenu(Car object[10]);

extern void start_carload(Car object[10]);
extern void truckmenu(Truck Truck_list[9]);
extern void start_truckload(Truck list[]);
int main()
{
    Car car_list[10];
    Truck Truck_list[9];
    int car_or_truck=1;
    start_carload(car_list);
    start_truckload(Truck_list);
    string decision="yes";
    
    cout<<"\t\t\t----------------------------------------------\n";
    cout<<"\t\t\tWelcome to the OOP car rental Company ,Choose the vehicle type you would like from the menu : "<<endl<<flush;
    cout<<"\t\t\tEnter 1 for Truck"<<endl;
    cout<<"\t\t\tEnter 2 for Car"<<endl;
    cout<<"Your Choice: ";
    cin>>car_or_truck;
    while (decision!="exit")
    {   
        if (car_or_truck==1)
        {
            truckmenu(Truck_list);
            int selected_size;
            cout<<"Your Choice: ";
            cin>>selected_size;
            while(selected_size<=0||selected_size>=10)
            {
                cout<<"Please Enter Choice Again"<<endl;
                cout<<"Your Choice: ";
                cin>>selected_size;
            }
        }
        else if (car_or_truck==2)
        {
            carmenu(car_list);
            int Selected_Car;
            cout<<"Your Choice: ";
            cin>>Selected_Car;
            while(Selected_Car<=0||Selected_Car>=11)
            {
                cout<<"Please Enter Choice Again"<<endl;
                cout<<"Your Choice: ";
                cin>>Selected_Car;
            }
            system("clear");
            car_list[Selected_Car-1].display_details(Selected_Car-1, car_list);
            if (car_list)
            {
                cout<<"Would you Like to book this one??"<<endl;
            }
            
        }
        else
        {
            if (car_or_truck!=1||car_or_truck!=2)
            {
                cout<<"Please Enter Choice Again"<<endl;
                cout<<"Your Choice: ";
                cin>>car_or_truck;
            }
        }
    }
    
}
