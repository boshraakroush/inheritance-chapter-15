#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>
#ifndef CAR.h
#define CAR.h

using namespace std; 

class Car : public Vehicle
{
private: 
	int doors; 
public:
	Car(int num) : Vehicle ()
	{
		doors = num;
	}

	int getdoors() const
	{
		return doors;
	}
	void displayInfo();
};
#endif