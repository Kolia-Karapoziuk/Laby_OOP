#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
	int gaver;
public:
	string name;
	string surname;
	int age;

	void sleep();
	void eat();
	void run();
	void breath();

	Human();
	Human(string newName, string newSurname = "petrov", int newAge = 50/*, int gaver = 100*/);
	~Human();
};



