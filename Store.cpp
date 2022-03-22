#include "Store.h"

Store::Store(string strName,int size) :storeName(strName), computersInStore(size)

{
	if (strName.length() > 10)
	{
		cout << "Store's name length is too long" << endl;
		this->storeName = "~";
	}
	else
	{
		this->storeName = strName;
	}
}

	//Get methods
string Store::getName() const
{
	return storeName;
}

int Store::getNumOfComputers() const
{
	return computersInStore;
}
const Computer& Store::getCompArray() const
{	
	
	return this->compArray[0];
}

	//Set methods
void Store::setName(const string& name)
{
	if (name.length() > 10)
	{
		cout << "Store's name length is too long" << endl;
		this->storeName = "~";
	}
	else 
	{
		this->storeName = name;
	}
}


void Store::addComputer(const Computer& computer)
{
	if (computersInStore >= 10)
	{
		cout << "The store is full!" << endl;
	}
	else
	{
		compArray[computersInStore++] = computer;
	}
}


void Store::compSort(sortType type) const
{
	int i, j; // used for sorting
	Computer temp;// temp computer for sorting
	cout << "There are " << this->computersInStore << " computers in the store. The computers:" << endl;
	Computer tempArray[MAX_COMPUTERS_NUMBER];

	for (i = 0; i < this->computersInStore; i++) // create temp array of computers
	{
		tempArray[i] = compArray[i];
	}


	//Insertion sort array by year or by name

	for (i = 1; i < this->computersInStore; i++)
	{
		temp = tempArray[i];
		for (j = i; j > 0 && compCompare(tempArray[j - 1], temp,type)>0; j--)
		{
			tempArray[j] = tempArray[j - 1];
		}
		tempArray[j] = temp;
	}

	for (i = 0; i < this->computersInStore; i++)
	{
		cout << "Computer " << i + 1 << endl;
		tempArray[i].print();
		cout << endl;
	}
}
	int Store::compCompare(Computer& comp1, Computer& comp2,sortType type) const
	{
		if (type==year) // check if we need to compare by year or by name
		{
			return comp1.getYear() > comp2.getYear();
		}
		else
		{
			return comp1.getManufacturer().compare(comp2.getManufacturer());
		}
	}

 void Store::printComputersByYear() const
 {
	compSort(year);
 }
 void Store::printComputersByName() const
 {
	compSort(name);
 }
