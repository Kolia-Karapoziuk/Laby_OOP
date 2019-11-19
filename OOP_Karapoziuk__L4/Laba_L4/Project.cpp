#include "Project.h"

Project::Project(Customer* newCustomer, Manager* newManager,int newPrice)
{
	customer = newCustomer;
	manager = newManager;
	price = newPrice;
}

Project::Project()
{
}

Project::~Project()
{

}

void Project::checkMan()
{
	if (customer->age >= 18 && customer->getMoney()>=1000)
	{
		Employee* Brigada = new Employee[5]
		{
			{"Semen Karpenko" ,5, 50},
			{"Ivan Petruk" ,1, 15},
			{"Vitalik Chorniy" ,10, 1},
			{"Sergiy Zarichnuy" ,7, 90},
			{"Nikita Boiko" ,5, 95}
		};
	}
	else
	{
		manager->sidBack();
		manager->drink();
	}

}

void Project::printProj()
{
	if (customer->getMoney() > 1000)
	{
		cout << "--------------Project--------------" << endl << endl;

		cout << "Customer: " << this->customer->surname << " " << this->customer->name << endl << "Money: " << this->customer->getMoney()<< endl;
		cout << "Manager: " << this->manager->surname << " " << this->manager->name << endl << endl;

		ofstream inFile("infoProject.txt");

		inFile << "--------------Project--------------" << endl << endl << "Customer: " << this->customer->surname << " " << this->customer->name << endl
			   << "Money: " << this->customer->getMoney() << endl;
	}

	else
		cout << "The customer has no money for the project" << endl;
}
