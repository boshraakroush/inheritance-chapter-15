#pragma once

#include <iostream>
#include <string>
#ifndef CAR_h
#define CAR_h
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
	virtual void displayInfo();
};
#endif