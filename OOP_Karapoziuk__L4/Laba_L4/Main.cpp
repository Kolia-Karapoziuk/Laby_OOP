#include <iostream>
#include "Project.h"
using namespace std;

Project* creatProject(Customer* newCustomer, Manager* newManager, int newPrice)
{
	Project* myProject = new Project(newCustomer, newManager, newPrice);
	return myProject;
}

int main()
{
	int money, price;
	string name, surname;

	cout << "Enter the customer Name: " << endl;
	cin >> name;
	cout << endl;

	cout << "Enter the customer Surname: " << endl;
	cin >> surname;
	cout << endl;

	cout << "Enter the customer money: " << endl;
	cin >> money;
	cout << endl;

	Customer* Ivan = new Customer(name, surname,money);
	Manager* Petro = new Manager("Petro", "Romanov");


	if (Ivan->getMoney() > 100)
	{
		cout << "Enter a price for the project: " << endl;
		cin >> price;
		cout << endl;

		/*Project* Web = new Project(Ivan, Petro, price);*/
		Project* Web = creatProject(Ivan, Petro, price);

		Ivan->payOrder(Web);
		Ivan->printCustomer();
		Petro->printMan();

		Web->printProj();
		Web->checkMan();
	}

	else
		cout << "The customer has no money for the project" << endl;

	//Human* Alex = new Human();
	return 0;
}