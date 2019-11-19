#pragma once
#include <iostream>
#include <string>
#include "Human.h"
#include "Project.h"
using namespace std;

class Project;

class Customer : public Human
{
	int money;
public:

	void makeOrder();
	void payOrder(Project* tmpProj);
	int getMoney();
	void printCustomer();
	Customer();
	Customer(string newSurname, string newName, int newMoney);

	~Customer();
};

