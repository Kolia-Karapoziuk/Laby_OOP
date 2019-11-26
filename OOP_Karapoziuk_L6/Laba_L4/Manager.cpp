#include "Manager.h"

void Manager::createTeam(Employee* newTeam)
{
	this->team = newTeam;
}

void Manager::printMan()
{
	cout << "Surname manager: " << surname << endl; 
	cout << "Name manager: " << name << endl << endl;
}

Manager::Manager()
{

}

Manager::Manager(string newSurame, string newName)
{
	this->surname = newSurame;
	this->name = newName;
	
}

Manager::~Manager()
{

}
