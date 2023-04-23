#pragma once

#include <iostream>
#include <string>
#ifndef CAR.h
#define CAR.h
#include "Vehicle.h"

using namespace std; 

class Car : public Vehicle
{
private: 
	int doors; 
public:
	Car(string make, int year, int doors);
	int getdoors();
	void setdoors(int);
	void displayInfo();
};
#endif