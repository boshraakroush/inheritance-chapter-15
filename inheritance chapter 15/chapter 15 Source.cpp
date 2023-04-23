//boshra akroush 
//CIS 1202 201
//APRIL 22 2023
#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"



using namespace std; 

int main()
{
	
	string maker; 
	int year; 

	cout << "Vehicle: " << endl; 
	cout << "Enter the manufacturer: " << endl;
	getline(cin, maker);
	cout << "Enter the year: " << endl;
	cin >> year;
	cin.ignore();
	Vehicle vehicle(maker, year);

	vehicle.displayInfo();
	int doors; 

	cout << "Car: " << endl; 
	cout << "Enter the Manufacturer: "; 
	getline(cin, maker);
	cout << "Enter the year: " ;
	cin >> year;
	cout << "Number of doors: "; 
	cin >> doors;
	cin.ignore();
	Car car(maker, year, doors);
	car.displayInfo();

	int towing; 
	cout << "Truck: " << endl;
	cout << "Enter the manufacturer: " ;
	cin >> maker; 
	cout << "Enter the year: " ;
	cin >> year;
	cin.ignore();
	cout << "Number of doors: ";
	cin >> doors;
	cin.ignore();
	cout << "Towing Capacity: ";
	cin >> towing; 
	Truck truck(maker, year, towing);
	truck.displayInfo();


}