#pragma once
#include <iostream>
#include <string>
#include "Human.h"
#include "Employee.h"
using namespace std;

class Manager : public Employee
{
public:
	int moneyCompany;
	Employee* team;
	
	void createTeam(Employee* newTeam);
	void printMan();
	
	Manager();
	Manager(string newSurame, string newName);

	~Manager();

};
