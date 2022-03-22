#include "Cpu.h"

//Constructor
Cpu::Cpu(double clockRate, string cpuManufacturerName, int yearOfManufacture) : clockRate(clockRate), yearOfManufacture(yearOfManufacture) 
{
	if (cpuManufacturerName.length() > 10)
	{

		cout << "Manufacturer's name length is too long" << endl;
		this->cpuManufacturer = "~";
	}
	else
	{
		this->cpuManufacturer = cpuManufacturerName;
	}
}

// Get functions
double Cpu::getClockRate() const
{
	return this->clockRate;
}

string Cpu::getManufacturer() const
{
	return this->cpuManufacturer;
}

int Cpu::getYear() const
{
	return this->yearOfManufacture;
}

// Set functions
void Cpu::setClockRate(const double clockRate)
{
	this->clockRate = clockRate;
}
// If string length is too long we set it to default value ("~") and output message to user.
void Cpu::setManufacturer(const string& name)
{
	if (name.length() > 10) 
	{
		cout << "Manufacturer's name length is too long" << endl;
		this->cpuManufacturer = '~';
	}
	else
	{
		this->cpuManufacturer = name;
	}
}

void Cpu::setYear(const int year)
{
	this->yearOfManufacture = year;
}

//Print cpu details
void Cpu::print() const
{
	cout << "Cpu clockRate: " << this->clockRate << endl;
	cout << "Cpu manufacturer: " << this->cpuManufacturer << endl;
	cout << "Cpu year: " << this->yearOfManufacture << endl;
}