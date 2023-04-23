#pragma once

#include "Vehicle.h"
#include "Car.h"
#ifndef TRUCK.h
#define TRUCK.h
#include <iostream>
#include <string>

class Truck : public Vehicle
{
private:
	int towingcapacity; 
public:
	Truck(string, int, int);
	int gettow();
	void settowing(int);
	void displayInfo();

};





#endif