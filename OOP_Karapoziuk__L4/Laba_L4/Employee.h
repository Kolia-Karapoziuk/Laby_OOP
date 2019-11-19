#pragma once
#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

class Nimuy /*: virtual public Human*/
{
public:
	static int deri;
	void eat() 
	{
		
	}

};


class Employee : virtual public Human, public Nimuy
{
	int workExperience;
	int skill;

public:

	void workOnTheProJect();
	void drink();
	void sidBack();

	int getSkill();
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

