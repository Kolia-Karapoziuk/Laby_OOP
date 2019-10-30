#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Drivers.h"
using namespace std;

class Comp // - 1 -
{
private:
	string display;
	string mouse;
	string tower;                      // - 2 -
	string year = "17.10.2019";


public:
	string usb_1;
	string os = "Windows";
	string linux = "Linux";
	string macOs = "MacOs";
	static int a;
	Comp();                                                 
	                                                        
	Comp(string display, string mouse, string tower);       //  
	                                                        
	Comp(const Comp& copyInfo);                             // 
	                                                        
	~Comp();                               

	static int getA() { return 2; }

	string getDisplay();
	string getMouse();
	string getTower();

	void writeToFile();
	void Dr(string display, string mose, string usb_1);  // - 4 -
	void print();
	void readFromFile();


};




