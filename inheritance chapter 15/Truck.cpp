#include "Truck.h"
#include "Vehicle.h"

Truck::Truck(string make, int year, int towingcap) : Vehicle(make, year)
{
	towingcapacity = towingcap; 
}
void Truck::settowing(int tow)
{
	towingcapacity = tow; 
}
int Truck::gettow()
{
	return towingcapacity; 
}
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingcapacity << endl;
}