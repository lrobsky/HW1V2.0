#pragma once
#define MAX_COMPUTERS_NUMBER 10
#include "Computer.h"
enum sortType { name, year };
class Store
{
	//Private members
	string storeName;
	Computer compArray[MAX_COMPUTERS_NUMBER];
	int computersInStore;

public:

	//Constructor
	Store(string strName = "~", int size = 0);

	//Get methods
	string getName() const;
	int getNumOfComputers() const;
	const Computer& getCompArray() const;

	//Set methods
	void setName(const string& name);

	void compSort(sortType type) const; //Sort computers lexicographically (names) or numerically (years)
	int compCompare(Computer& comp1,Computer& comp2,enum sortType) const; //Compare 2 computers by name or by year
	void addComputer(const Computer& computer); //Add computer to store
	void printComputersByName() const; //Print computers in store by name
	void printComputersByYear() const; //Print computers in store by year

};

