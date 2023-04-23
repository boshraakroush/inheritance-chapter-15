#include "Car.h"
#include "Vehicle.h"

Car::Car(string make, int year, int door) : Vehicle (make,  year)
{
	door = doors; 
}
int Car::getdoors()
{
	return doors;
}
void Car::setdoors(int door)
{
	door = doors;
}
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of door: " << doors << endl; 
}