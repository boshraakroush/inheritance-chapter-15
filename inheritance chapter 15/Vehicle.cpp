#include "Vehicle.h"
Vehicle::Vehicle(string make, int y)
{
	this->manufacturer = make;
	this->year = y;
}
string Vehicle::getmanufacturer() 
{
	return manufacturer;
}
void Vehicle::setbuilt(string make)
{
	this->manufacturer = make;
}
void Vehicle::setyear(int byear)
{
	this->year = byear;
}
int Vehicle::getyear()
{
	return year;
}
void Vehicle::displayInfo()
{
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
	
}
