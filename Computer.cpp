#include "Computer.h"
#include "Cpu.h"

// Constructor
Computer::Computer(Cpu cpu, string manuName, int yearOfManufacture , string compColor , bool isLaptop) :
	processor(cpu), yearOfManufacture(yearOfManufacture), isLaptop(isLaptop)
	
{
	if (manuName.length() > 10)
	{

		cout << "Manufacturer's name length is too long" << endl;
		this->computerManufacturer = "~";
	}
	else
	{
		this->computerManufacturer = manuName;
	}
	if (compColor.length() > 10)
	{

		cout << "Color string length is too long" << endl;
		this->computerColor = "~";
	}
	else
	{
		this->computerColor = compColor;
	}

}

// Get methods
Cpu Computer::getCpu() const
{
	return this->processor;
}
string Computer::getManufacturer() const
{
	return this->computerManufacturer;
}
int Computer::getYear() const
{
	return this->yearOfManufacture;
}
string Computer::getColor() const
{
	return this->computerColor;
}
bool Computer::getIsLaptop() const
{
	return this->isLaptop;
}

// Set methods

void Computer::setCpu(const Cpu& processor)
{
	this->processor = processor;
}
void Computer::setManufacturer(const string& name) 
{
	if (name.length() > 10)
	{
		cout << "Manufacturer's name length is too long" << endl;
		this->computerManufacturer = "~";
	}
	else
	{
		this->computerManufacturer = name;
	}
}
void Computer::setYear(const int year)
{
	this->yearOfManufacture = year;
}
void Computer::setColor(const string& color) 
{
	if (color.length() > 10)
	{
		cout << "Color string length is too long"  << endl;
		this->computerColor = "~";
	}
	else
	{
		this->computerColor = color;
	}
}
void Computer::setIsLaptop(const bool isLaptop)
{
	this->isLaptop = isLaptop;
}


// print computer details

void Computer::print() const
{
	this->processor.print(); // print cpu details
	cout << "Computer manufacturer: " << this->computerManufacturer << endl;
	cout << "Computer year: " << this->yearOfManufacture << endl;
	cout << "Computer color: " << this->computerColor << endl;
	cout << "Computer is laptop: ";
	this->isLaptop ? std::cout << "True" << std::endl : std::cout << "False" << std::endl;
}
