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
        cout<<"Enter "<<num<<" - To Select "<<list[i].get_maker()<<" "<<list[i].get_model()<<endl<<flush;
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
        list[i].set_maker(Car_list[i]);
        list[i].set_model(Car_makelist[i]);
        list[i].set_color(Car_color[i]);
        list[i].set_car_type(Car_type[i]);
        list[i].set_status(Car_stat[i]);
    }
}
void start_truckload(Truck list[])
{
    string truck_color[9]={"White","Grey","Red","Yellow","Blue","Black","Purple","Pearl", "White"};
    int truck_size[9]={14,14,14,46,46,46,56,56,56};
    bool truck_stat[9]={1,1,1,1,1,1,1,1,1};
    for (int i = 0; i < 9; i++)
    {
        list[i].set_size(truck_size[i]);
        list[i].set_status(truck_stat[i]);
    }
}
void truckmenu(Truck Truck_list[])
{
    cout<<"\t\t\t----------------------------------------------\n";
    cout<<"\t\t\tWelcome to the OOP truck rental company ,Choose the truck size you would like from the menu : "<<endl<<flush;
    int num=1;
    for (int i = 0; i < 9; i++)
    {
        cout<<"\t\t\t";
        cout<<"Enter "<<num<<" - To Select size "<<Truck_list[i].get_size()<<endl<<flush;
        num++;
    }
}
void booking_menu(Bookings list[], int booking_number)
{
    string firstname,lastname;
    int start_date,start_month,end_date, end_month;
    cout<<"Please Enter Your first name: ";
    cin>>firstname;
    list[booking_number-1].set_firstname(firstname);
    cout<<"Please Enter Your last name: ";
    cin>>lastname;
    list[booking_number-1].set_lastname(lastname);
    cout<<"Enter Booking Start date : ";
    cin>>start_date;
    while (start_date<1||start_date>31)
    {
        cout<<"Wrong Entry, Please enter again: ";
        cin>>start_date;
    }
    list[booking_number-1].set_sdate(start_date);
    cout<<"Enter Booking Start month: ";
    cin>>start_month;
    list[booking_number-1].set_smonth(start_month);
      while (start_month<1||start_month>12)
    {
         cout<<"Wrong Entry, Please enter again: ";
        cin>>start_month;
    }
    list[booking_number-1].set_smonth(start_month);
    

    cout<<"Enter Booking end date : ";
    cin>>end_date;
    while (end_date<1||end_date>31)
    {
        cout<<"Wrong Entry, Please enter again: ";
        cin>>end_date;
    }
    list[booking_number-1].set_edate(end_date);
    cout<<"Enter Booking end month: ";
    cin>>end_month;
    while (end_month<1||end_month>12)
    {
         cout<<"Wrong Entry, Please enter again: ";
        cin>>end_month;
    }
    list[booking_number-1].set_emonth(end_month);
    
}
void cancel_car_booking(Bookings list[], Car Car_list[])
{
    int num=1;
    int choice;
    int cancel_decision;
    bool dec;
    int return_num;
    for (int i = 0; i < 10; i++)
    {
        if (Car_list[i].get_status()==false)
        {
            dec=true;
        }
        
    }
    if (dec==true)
    {
        for (int i = 0; i < 10; i++)
        {
            if(Car_list[i].get_status()==false)
            {
                cout<<"\t\t\t";
                cout<<"Enter "<<i+1<<" - To Select "<<Car_list[i].get_maker()<<" "<<Car_list[i].get_model()<<endl<<flush;
                num++;
            }
        }
        cout<<"Your Choice: ";
        cin>>choice;
        choice=choice-1;
        cout<<"Are you sure you want to cancel the booking (enter 1 for yes, 2 for no): ";
        cin>>cancel_decision;
        while (cancel_decision<1||cancel_decision>2)
        {
            cout<<"invalid choice"<<endl;
            cout<<"Your Choice: ";
            cin>>cancel_decision;
        }
        Car_list[choice].set_status(true);
    }
    else
    {
        cout<<"There are no bookings"<<endl;
        cout<<"Enter any number to return: ";
        cin>>return_num;
    }
    
    
}
void cancel_truck_booking(Bookings list[], Truck Truck_list[])
{
    int num=1;
    int choice;
    int cancel_decision;
    bool dec;
    int return_num;
    for (int i = 0; i < 10; i++)
    {
        if (Truck_list[i].get_status()==false)
        {
            dec=true;
        }
        
    }
    if (dec==true)
    {
        for (int i = 0; i < 10; i++)
        {
            if(Truck_list[i].get_status()==false)
            {
                cout<<"\t\t\t";
                cout<<"Enter "<<i+1<<" - To Select "<<Truck_list[i].get_maker()<<" "<<Truck_list[i].get_model()<<endl<<flush;
                num++;
            }
        }
        cout<<"Your Choice: ";
        cin>>choice;
        choice=choice-1;
        cout<<"Are you sure you want to cancel the booking (enter 1 for yes, 2 for no): ";
        cin>>cancel_decision;
    while (cancel_decision<1||cancel_decision>2)
    {
        cout<<"invalid choice"<<endl;
        cout<<"Your Choice: ";
        cin>>cancel_decision;
    }
    Truck_list[choice].set_status(true);
    }
    else
    {
        cout<<"There are no bookings"<<endl;
        cout<<"Enter any number to return: ";
        cin>>return_num;
    }
    
    

    
}
    
    