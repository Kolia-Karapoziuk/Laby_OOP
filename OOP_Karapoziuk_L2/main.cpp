#include <iostream>
#include <string>
#include "Comp.h"
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	string Drav,display,mouse; // - 8 - 
	cout << "Brand Monitor: ";
	cin >> display;

	cout << "Mouse brand: ";
	cin >> mouse;

	Comp Asus(display, mouse, "Zalman"); // - 7 -
	system("cls");
	Asus.Print();

	cout << "\tTo install drivers, Enter[Operating System] --> ";
	
	cin >> Drav;
	cout << endl;
	Asus.Dr(display, mouse, Drav);
	
	Comp Acer[5] =                             // - 6 -
	{
		Comp(display, mouse, "Zalman"), //
		Comp(display, mouse, "Zalman"),	//
		Comp(display, mouse, "Zalman"),	// - 5 
		Comp(display, mouse, "Zalman"),	//
		Comp(display, mouse, "Zalman")	//
	};
	Asus.Random();


	Comp** Lenovo;                   

	try
	{
		Lenovo = new Comp*[4];                               // - 6 -
		                                                  
		Lenovo[0] = new Comp(display, mouse, "Zalman"); //
		Lenovo[1] = new Comp(display, mouse, "Zalman"); //
		Lenovo[2] = new Comp(display, mouse, "Zalman"); // - 5 
		Lenovo[3] = new Comp(display, mouse, "Zalman"); // 
		Lenovo[4] = new Comp(display, mouse, "Zalman"); //
	}

	catch (bad_alloc ba)
	{
		cout << "No memory allocated" << endl;
		cout << ba.what() << endl;
		return -1;
	}

	delete Lenovo;

	return 0;
}