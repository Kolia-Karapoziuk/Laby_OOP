#pragma once
#include <iostream>
#include <string>
#include "Comp.h"
using namespace std;

class Drivers  // - 1 -
{
private:
	string driverForMouse;
	string driverForDisplay;
	bool Check = true;
	string data = "23.10.2019";
	string version;

	
public:

	string usb_2;
	string macOs = "MacOs";

	string getDriversForMouse();
	string getDriversForDisplay();

	Drivers(string  driverForM, string driverForD, string version);
	//Drivers(string  driverForM, string driverForD, string vers) : driverForMouse(driverForM), driverForDisplay(driverForD), version(vers) {}; /// - 5 -

	void printDR();
	
	
	Drivers();

	/*Comp Aser;*/


};

