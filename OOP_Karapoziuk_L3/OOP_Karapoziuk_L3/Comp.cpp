#include "Comp.h"

Comp::Comp()
{ 

}

Comp::Comp(string display, string mouse, string tower)
{
	this->display = display;
	this->mouse = mouse;
	this->tower = tower;
}

Comp::Comp(const Comp& copyInfo)
{
	display = copyInfo.display;
	mouse = copyInfo.mouse;
	tower = copyInfo.tower;
}

Comp::~Comp()
{
	//cout << "Destructor" << endl;
}

string Comp::getDisplay()
{
	return string(display);
}

string Comp::getMouse()
{
	return string(mouse);
}

string Comp::getTower()
{
	return string(tower);
}

void Comp::writeToFile()
{
	ofstream inFile("Info.txt", ios::app);

	inFile.close();
}

void Comp::Dr(string display, string mose, string usb_1)
{
	if (usb_1 != os && usb_1 != linux)
	{
		cout << "Drivers eror" << endl;
		return;
	}

	cout << "Drivers Installing Successfully: " << endl
		<< "Monitor " << display << " Recognized..." << endl
		<< "Mouse " << mouse << " Recognized..." << endl
		<< "Operating System: " << usb_1 << endl
		<< "Last updated date " << year << "." << endl;

	ofstream outFile;
	outFile.open("Info.txt");
	outFile
		<< "Drivers Installing Successfully : " << endl
		<< "Monitor " << display << " Recognized..." << endl
		<< "Mouse" << mouse << " Recognized..." << endl
		<< "Operating System: " << usb_1 << endl
		<< "Last updated date " << year << "." << endl;

	outFile.close();
}

void Comp::readFromFile()
{
	string ptr = "Info.txt";
	ifstream inFile;
	inFile.open(ptr);

	cout << "-------------------------------------|" << endl;
	string str;

	while (!inFile.eof())
	{
		getline(inFile, str);
		cout << str << endl;
	}

	cout << "-------------------------------------|" << endl;
	inFile.close();
}

void Comp::print()
{
	cout << "Monitor: " << display << endl
		 << "Mouse: " << mouse << endl
		 << "Tower: " << tower << endl;
}


