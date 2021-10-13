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
extern void truckmenu(Truck Truck_list[]);
extern void start_truckload(Truck list[]);
int main()
{
    Car car_list[10];
    Truck Truck_list[9];
    int car_or_truck=1;
    start_carload(car_list);
    start_truckload(Truck_list);
    string decision="yes";
    int book_decision=0;
    int truck_book_decision=0;
    
    
    while (decision!="exit")
    {   
        if (car_or_truck!=1||car_or_truck!=2)
        {
            cout<<"Invalid Choice"<<endl;
        }
        cout<<"\t\t\t----------------------------------------------\n";
        cout<<"\t\t\tWelcome to the OOP car rental Company ,Choose the vehicle type you would like from the menu : "<<endl;
        cout<<"\t\t\tEnter 1 for Truck"<<endl;
        cout<<"\t\t\tEnter 2 for Car"<<endl;
        cout<<"Your Choice: ";
        cin>>car_or_truck;
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
            system("clear");
            Truck_list[selected_size-1].display_details(selected_size-1,Truck_list);
            if (Truck_list[selected_size-1].get_status()==1)
            {
                cout<<"Would you Like to book this one??"<<endl;
                cout<<"Enter 1 for yes, 2 for no: ";
                cin>>book_decision;
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
            if (car_list[Selected_Car-1].get_status()==1)
            {
                cout<<"Would you Like to book this one??"<<endl;
                cout<<"Enter 1 for yes, 2 for no: ";
                cin>>book_decision;
            }
            else if (car_list[Selected_Car-1].get_status()==0)
            {
                cout<<"This car is not avaliable. Please choose another one"<<endl;
            }
            if (book_decision==1)
            {

            }
            else if (book_decision==2)
            {
                
            }
        }
    }
}