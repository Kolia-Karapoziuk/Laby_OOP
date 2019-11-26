#include"Customer.h"

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

void Customer::printMoneyForMe()
{
	cout << moneyForMe << endl;
}

void Customer::printMoney()
{
	cout << money << endl;
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

Customer& Customer::operator++()
{
	++moneyForMe;
	return *this;
}

Customer& Customer::operator--()
{
	moneyForMe--;
	return *this;
}

Customer Customer::operator+(Customer cust)
{
	moneyForMe += cust.moneyForMe;
	return *this;
}

Customer Customer::operator-(int newMoney)
{
	Customer cust;
	cust.moneyForMe = moneyForMe - newMoney;
	return cust;
}

Customer Customer::operator*(int value)
{
	this->moneyForMe = moneyForMe * value;
	return *this;
}

Customer Customer::operator=(int ptr)
{
	this->money= ptr;
	return *this;
}

Customer Customer::operator+=(Customer& ptr)
{
	this->money = this->money + ptr.money;
	return *this;
}

Customer Customer::operator-=(Customer& ptr)
{
	this->moneyForMe = this->moneyForMe - ptr.moneyForMe;
	return *this;
}

Customer Customer::operator*=(int value)
{
	this->moneyForMe = this->moneyForMe * value;
	return *this;
}


