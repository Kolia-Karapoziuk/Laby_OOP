#include "Employee.h"

void Employee::workOnTheProJect()
{
	cout << "Employee work" << endl;
}

void Employee::drink()
{
	cout << "Employees drink" << endl;
}

void Employee::sidBack()
{
	cout << "Employees side back" << endl;
}

int Employee::getSkill()
{
	return skill;
}

void Employee::printSkill()
{
	cout << this->skill << endl;
}

int Employee::getWorkExperience()
{
	return workExperience;
}

void Employee::printEmpl()
{
	this->workOnTheProJect();
	cout << this->name << endl;
	cout << "Work Experience: " << workExperience << endl;
	cout << "Skill: " << skill << endl << endl;
	
}

Employee::Employee()
{

}

Employee::Employee(string name, int workExp, int skill) : Human(name)
{
	workExperience = workExp;
	this->skill = skill;
	printEmpl();
}

Employee::~Employee()
{

}






