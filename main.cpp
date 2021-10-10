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
extern void truckmenu(Truck Truck_list[10]);
int main()
{
    Car car_list[10];
    Truck Truck_list[10];
    int car_or_truck=0;
    start_carload(car_list);
    string decision="yes";
    
    cout<<"\t\t\t----------------------------------------------\n";
    cout<<"\t\t\tWelcome to the OOP car rental Company ,Choose the vehicle type you would like from the menu : "<<endl<<flush;
    cout<<"Enter 1 for Truck"<<endl;
    cout<<"Enter 2 for Car"<<endl;
    cout<<"Your Choice: ";
    cin>>car_or_truck;
    while (decision!="exit")
    {
        while (car_or_truck!=1||car_or_truck!=2)
        {
            cout<<"Please Enter Choice Again"<<endl;
            cout<<"Your Choice: ";
            cin>>car_or_truck;
        }
        
        if (car_or_truck==1)
        {
            /* code */
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
        }
    }
    
}
