#include "Drivers.h"

string Drivers::getDriversForMouse()
{
	return string(driverForMouse);
}

string Drivers::getDriversForDisplay()
{
	return string(driverForDisplay);
}

Drivers::Drivers(string driverForM, string driverForD , string vers)
{
	this->driverForMouse = driverForM;
	this->driverForDisplay = driverForD;
	this->version = vers;
}

void Drivers::printDR()
{
	cout << endl;
	cout << "driverForMouse:" << driverForMouse << endl;
	cout << "driverForDisplay:" << driverForDisplay << endl;
	cout << "driverFor ver:" << version << endl;
}

Drivers::Drivers()
{
}


