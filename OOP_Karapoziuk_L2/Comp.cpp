#include "Comp.h"

Comp::Comp(string display, string mouse,  string tower)
{
	this->display = display;
	this->mouse = mouse;
	this->tower = tower;
}

void Comp::Dr(string display, string mouse, string usb_1)
{
	if (usb_1 != os && usb_1 != linux)
	{
		cout << "Drivers eror" << endl;
		return;
	}

	cout << "Drivers Installing Successfully : " << endl
		<< "Monitor " << display << " Recognized..." << endl
		<< "Mouse" << mouse << " Recognized..." << endl
		<< "Operating System: " << usb_1 << endl
		<< "Last updated date" << year << "." << endl;

	ofstream outFile;
	outFile.open("Info.txt");
	outFile
		<< "Drivers Installing Successfully : " << endl
		<< "Monitor " << display << " Recognized..." << endl
		<< "Mouse" << mouse << " Recognized..." << endl
		<< "Operating System: " << usb_1 << endl
		<< "Last updated date" << year << "." << endl;
	
	outFile.close();
}

void Comp::Dr(string display, string mouse)
{
	this->Dr(display, mouse, macOs);
}

void Comp::RD()
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

void Comp::Random()
{
	srand(time(NULL)); 
	int R = rand() % 25;
	int* ptr = new int [R]; 
	
	for (int count = 0; count < R; count++)
		ptr[count] = rand() % 10;

	cout << endl;
	cout << "Mas : ";
	for (int count = 0; count < R; count++)
		cout << ptr[count] << "    ";

	for (int i = 0; i < R; i++) 
	{            
		for (int j = R - 1; j > i; j--) 
		{     
			if (ptr[j - 1] > ptr[j]) {
				int temp = ptr[j - 1];
				ptr[j - 1] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
	cout << endl << endl;

	cout << "Sort Mas: ";
	for (int count = 0; count < R; count++)
		cout  << ptr[count] << "    ";

	delete[] ptr; 
	cout << endl;
}

void Comp::Print()
{
	cout << "Monitor: " << display << endl
		 << "Mouse: " << mouse << endl
		 << "Tower: " << tower << endl;			
}


