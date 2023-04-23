#include "Car.h"
#include "Vehicle.h"

Car::Car(string make, int year, int door) : Vehicle (make,  year)
{
	doors = door; 
}
int Car::getdoors()
{
	return doors;
}
void Car::setdoors(int door)
{
	this->doors = door;
}
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of door: " << doors << endl; 
}