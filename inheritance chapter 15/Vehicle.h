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
	Vehicle(string manufacturer, int year);
	string getmanufacturer();
	void setbuilt(string manufacturer);
	int getyear();
	void setyear(int year);
	virtual void displayInfo();
};





#endif