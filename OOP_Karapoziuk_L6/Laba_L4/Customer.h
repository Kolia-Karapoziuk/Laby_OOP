#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Human.h"
#include "Project.h"
using namespace std;

class Project;

class Customer : public Human
{
	int money;
public:
	int moneyForMe = 5;


	void payOrder(Project* tmpProj);
	int getMoney();
	void printCustomer();
	void printMoneyForMe();
	void printMoney();
	Customer();
	Customer(string newSurname, string newName, int newMoney);
	~Customer();

	Customer& operator ++ ();
	Customer& operator -- ();
	Customer operator + (Customer emp);
	Customer operator - (int notWork);
	Customer operator * (int value);
	Customer operator = (int ptr);
	Customer operator += (Customer& ptr);
	Customer operator -= (Customer& ptr);
	Customer operator *=(int value);
	/*Customer operator [](int value);*/

};

