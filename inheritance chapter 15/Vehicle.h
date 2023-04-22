#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef VEHICLE.h
#define VEHICLE.h

class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle(string maker, int y)
	{
		 manufacturer = maker;
		year = y;
	}
	
	string built() const
	{
		return manufacturer;
	}
	int y() const
	{
		return year;
	}
	void displayInfo();
	
};





#endif