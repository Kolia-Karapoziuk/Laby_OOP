#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Customer.h"
#include "Manager.h"
using namespace std;

class Customer;
class Project
{
public:
	int price;

	//Асоціація
	Customer* customer;
	Manager* manager;

	Project(Customer* newCustomer, Manager* newManager, int newPrice);
	Project();
	~Project();
	void checkMan();
	void printProj();
};


