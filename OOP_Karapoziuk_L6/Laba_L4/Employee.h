#pragma once
#include <iostream>
#include <string>
#include "Human.h"

using namespace std;


class Employee : public Human 
{
	int workExperience;
	int skill;
public:
	
	void workOnTheProJect();
	void drink();
	void sidBack();

	int getSkill();
	void printSkill();
	int getWorkExperience();

	void Rarr() 
	{
		name = "Ivan";
		Human::eat();
	}
	void printEmpl();

	Employee();
	Employee(string name,int workExp, int skill);
	~Employee();
	

};

