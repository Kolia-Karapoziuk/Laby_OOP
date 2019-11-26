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

void Project::checkMan()
{
	if (customer->age >= 18 && customer->getMoney()>=1000)
	{
		try
		{
			Employee* Brigada = new Employee[5]
			{
				{"Semen Karpenko" ,5, 50},
				{"Ivan Petruk" ,1, 15},
				{"Vitalik Chorniy" ,10, 1},
				{"Sergiy Zarichnuy" ,7, 90},
				{"Nikita Boiko" ,5, 95}
			};
			/*delete Brigada;*/
		}
		catch (const std::exception&)
		{
			cerr << "Memory is not allocated" << endl;
		}	
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
		cout << "Customer: " << this->customer->surname << " " << this->customer->name << endl;
		cout << "Money for the project: " << this->manager->moneyCompany << endl;
		cout << "Manager: " << this->manager->surname << " " << this->manager->name << endl << endl;	
	}
	else
	{
		cout << "The customer has no money for the project" << endl;
	}	
}

void Project::ReadFromFie()
{
	try
	{
		string ptr = "infoProject.txt";
		string str;
		ifstream inFile;
		inFile.open(ptr);

		while (!inFile.eof())
		{
			getline(inFile, str);
			cout << str << endl;
		}
		inFile.close();
	}
	catch (const std::exception&)
	{
		throw ExaptionWithOpenFile();
	}	
}

void Project::WriteFromFile(Project* tmpProj)
{
	try
	{
		ofstream inFile("infoProject.txt");
		if (inFile.is_open() == true)
		{
			inFile << "--------------Project--------------" << endl << endl 
				<< "Customer: "<< this->customer->surname << " " << this->customer->name << endl
			    << "Money for the project: " << this->manager->moneyCompany << endl;
		}
		else
		{
			throw ExaptionWithOpenFile();
		}
	}
	catch (const std::exception&)
	{
		cerr << "Eror whith write to file" << endl;
	}
	
}

Project::~Project()
{

}