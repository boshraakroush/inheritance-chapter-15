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
	Car(string , int , int );
	int getdoors();
	void setdoors(int);
	void displayInfo();
};
#endif