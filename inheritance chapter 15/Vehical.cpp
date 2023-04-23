#include "Vehicle.h"
Vehicle::Vehicle(string make, int y)
{
	manufacturer = make; 
	year = y;
}
string Vehicle::getmanufacturer() 
{
	return manufacturer;
}
void Vehicle::setbuilt(string make)
{
	manufacturer = make;
}
void Vehicle::setyear(int byear)
{
	year = byear;
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
