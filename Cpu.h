#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
class Cpu
{
	//private members
	double clockRate;
	string cpuManufacturer; 
	int yearOfManufacture;

public:
	
	//Constructor
	Cpu(double clockRate = 0.0, string cpuManufacturerName = "~", int yearOfManufacture = 0);

	//Get methods
	double getClockRate() const;
	string getManufacturer() const;
	int getYear() const;

	//Set methods
	void setClockRate(const double clockRate);
	void setManufacturer(const string& name);
	void setYear(const int year);

	//print cpu details
	void print() const;

};
