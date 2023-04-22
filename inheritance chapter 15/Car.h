#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>
#ifndef CAR.h
#define CAR.h

 

using namespace std; 

class Car 
{
protected: 
	int doors; 
public:
	Car(int num)
	{
		doors = num;
	}

	int getdoors() const
	{
		return doors;
	}
};
#endif