#pragma once

#include "Vehicle.h"
#include "Car.h"
#ifndef TRUCK_h
#define TRUCK_h
#include <iostream>
#include <string>

class Truck : public Vehicle
{
private:
	int towingcapacity; 
public:
	Truck(string, int,int);
	int gettow();
	void settowing(int);
	virtual void displayInfo();

};





#endif