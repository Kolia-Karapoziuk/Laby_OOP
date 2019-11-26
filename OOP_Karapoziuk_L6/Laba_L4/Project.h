#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Customer.h"
#include "Manager.h"
#include "ExcaptionGenerator.h"
using namespace std;

class Customer;
class Project
{
public:
	int price;

	//Àñîö³àö³ÿ
	Customer* customer;
	Manager* manager;

	Project(Customer* newCustomer, Manager* newManager, int newPrice);
	Project();
	~Project();
	void checkMan();
	void printProj();
	void ReadFromFie();
	void WriteFromFile(Project* tmpProj);

};


