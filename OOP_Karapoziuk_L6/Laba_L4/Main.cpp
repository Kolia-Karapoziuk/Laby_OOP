#include <iostream>
#include "Project.h"
#include "ExcaptionGenerator.h"
#include "Human.h"
using namespace std;

Project* creatProject(Customer* newCustomer, Manager* newManager, int newPrice)
{
	Project* myProject = new Project(newCustomer, newManager, newPrice);
	return myProject;
}

class Work
{
public:
	string type;
	Work() {};
	Work(string type):type(type) {};

};

template <class T, class V>
class Office
{
private:
	T manager;
	V evil;
	int kilkist;
public:
	Office(T newManager, V newEvil, int newKilkist) : manager(newManager), evil(newEvil), kilkist(newKilkist) {}
	
	void getInfo() 
	{
		cout << "Office is worked" << endl;
	}

	T getManager() {
		return manager;
	}
	
	V getEvil() {
		return evil;
	}
	int getKilkist() {
		return kilkist;
	}
};

int main()
{
	/*
	//int money, price;
	//string name, surname;
	//
	//cout << "Enter the customer Name: " << endl;
	//cin >> name;
	//cout << endl;
	//
	//cout << "Enter the customer Surname: " << endl;
	//cin >> surname;
	//cout << endl;
	//
	//cout << "Enter the customer money: " << endl;
	//cin >> money;
	//cout << endl;
	//
	//
	//	Customer* Ivan = new Customer(name, surname, money);
	//Manager* Petro = new Manager("Petro", "Romanov");
	//
	//	
	//	if (Ivan->getMoney() > 100)
	//	{
	//		cout << "Enter a price for the project: " << endl;
	//		cin >> price;
	//		cout << endl;
	//	
	//		Project* Web = new Project(Ivan, Petro, price);
	//		Project* Web = creatProject(Ivan, Petro, price);
	//	
	//		Ivan->payOrder(Web);
	//		Ivan->printCustomer();
	//		Petro->printMan();
	//	
	//		Web->printProj();
	//		Web->checkMan();
	//		Web->WriteFromFile(Web);
	//	
	//	}
	//	else
	//		cout << "The customer has no money for the project" << endl;
	//
	*/
  //---------1---------//
	cout << "---------1---------//" << endl;
	Customer Nikita;
	cout << "Nikita money = ";
	Nikita.printMoneyForMe();

	++Nikita.moneyForMe;
	cout << "Nikita++ = ";
	Nikita.printMoneyForMe();

	--Nikita.moneyForMe;
	cout << "Nikita-- = ";
	Nikita.printMoneyForMe();
	cout << endl;

  //---------2---------//
	cout << "-----------2-----------//" << endl;
	Customer newCast;
	cout << "newCast money = ";
	newCast.printMoney();

	newCast = Nikita.getMoney() + Nikita.getMoney();
	cout << "newCast money + ";
	newCast.printMoney();

	newCast = newCast.getMoney() - 875;
	cout << "newCast money - 875 = ";
	newCast.printMoney();
	cout << endl;

	//---------3---------//
	cout << "-----------3-----------//" << endl;
	Customer Ivan;

	Ivan = Ivan.getMoney() * 5;
	cout << "Ivan money * 5 = ";
	Ivan.printMoney();

	Ivan += newCast;
	cout << "Ivan += newCast = ";
	Ivan.printMoney();

	cout << "-----------5-6----------//" << endl;
	Work isGood("Work is Good");
	Work isBad("Work is Bad");

	Office<string, bool> man("Ivan",true,100);
	Office<string, bool> man2(isBad.type, false, 0);

	man.getInfo();
	man2.getInfo();
	return 0;
}