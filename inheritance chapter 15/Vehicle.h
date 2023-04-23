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
	Vehicle(string , int );
	string getmanufacturer();
	void setbuilt(string );
	int getyear();
	void setyear(int );
	void displayInfo();
};





#endif