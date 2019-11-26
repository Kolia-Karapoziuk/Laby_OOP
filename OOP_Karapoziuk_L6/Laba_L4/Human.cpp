#include "Human.h"

 void Human::sleep()
{
	cout << "Human sleep" << endl;
}

void Human::eat()
{
	cout << "Human eat" << endl;
}

void Human::run()
{
	cout << "Human run" << endl;
}

Human::Human()
{
	surname = "Petrov";
	name = "Ivan";
	age = 25;
}

Human::Human(string newName, string newSurname, int newAge) : surname(newSurname), name(newName), age(newAge){}
Human::~Human(){ }
