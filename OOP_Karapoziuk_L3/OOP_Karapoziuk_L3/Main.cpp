#include <iostream>
#include "Comp.h"
#include "Drivers.h"

int main() 
{
	string Drav, display, mouse; // - 8 - 
	cout << "Brand Monitor: ";
	cin >> display;

	cout << "Mouse brand: ";
	cin >> mouse;

	Comp Asus(display, mouse, "Zalman"); // - 12 -
	system("cls");
	Asus.print();

	cout << "\tTo install drivers, Enter[Operating System] --> ";

	cin >> Drav;
	cout << endl;

	Asus.Dr(display, mouse, Drav);

	//Comp Acer[5] =                              // - 8 -
	//{
	//	Comp(display, mouse, "Zalman"), //
	//	Comp(display, mouse, "Zalman"),	//
	//	Comp(display, mouse, "Zalman"),	// -  -
	//	Comp(display, mouse, "Zalman"),	//
	//	Comp(display, mouse, "Zalman")	//
	//};


	//Comp** Lenovo;                               //- 8 -
	//                         
	//try 
	//{        
	//	Lenovo = new Comp * [4];                              
	//
	//	Lenovo[0] = new Comp(display, mouse, "Zalman"); //
	//	Lenovo[1] = new Comp(display, mouse, "Zalman"); //
	//	Lenovo[2] = new Comp(display, mouse, "Zalman"); // - 5 
	//	Lenovo[3] = new Comp(display, mouse, "Zalman"); // 
	//	Lenovo[4] = new Comp(display, mouse, "Zalman"); //
	//}
	//
	//catch (bad_alloc ba)
	//{
	//	cout << "No memory allocated" << endl;
	//	cout << ba.what() << endl;
	//	return -1;
	//}
	//
	//delete Lenovo;

	Drivers Scer(" The installation was successful", " The installation was successful", " Stable v145");

	Scer.printDR();

	return 0;

}