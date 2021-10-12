all: tests project

project: main.cpp Vehicle.o
	g++ main.cpp Vehicle.o Driver.o Booking.o -o compiled

Vehicle.o: Vehicle.h Vehicle.cpp Car.h Car.cpp
	g++ -c Vehicle.cpp Car.cpp 

Driver.o: Driver.h Driver.cpp
	g++ -c Driver.cpp

Booking.o: Booking.h Booking.cpp
	Booking.cpp

