#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;

class Comp // - 1 -
{
 private:
	string display;
	string mouse; 
	string tower;
	string year = "14.10.2019";
	                             // - 2 -
 public:
	string os = "Windows";
	string linux = "Linux";
	string macOs = "MacOs";
	string usb_1;
	

	Comp(string display, string mouse, string tower); // - 3 -

	void Dr(string display, string mose);

	void Dr(string display, string mose, string usb_1);  // - 4 -
															
	void RD();	// - 4 -	
	
	void Random(); // - 9 -

	void Print();
	
};

