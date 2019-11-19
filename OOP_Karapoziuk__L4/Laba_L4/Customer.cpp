#include"Customer.h"

void Customer::makeOrder()
{
	cout << "Customer run " << endl;
}

void Customer::payOrder(Project* tmpProj)
{
	money -= tmpProj->price;
	tmpProj->manager->moneyCompany += tmpProj->price;
}

int Customer::getMoney()
{
	return money;
}

void Customer::printCustomer()
{
	cout << "Surname customer: " << surname << endl;
	cout << "Name customer: " << name << endl;
	cout << "Money customer: " << money << endl << endl;
}

Customer::Customer()
{
	surname = "Kolia";
	name = "Karapoziuk";
	age = 20;
	money = 10000;
}

Customer::Customer(string newSurname, string newName, int newMoney)
{
	this->surname = newSurname;
	this->name = newName;
	this->money = newMoney;
}

Customer::~Customer()
{
}
