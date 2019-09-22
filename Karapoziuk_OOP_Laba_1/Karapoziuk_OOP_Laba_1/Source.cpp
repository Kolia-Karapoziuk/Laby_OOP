#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student        
{                        
	string name;     
	string surname;   
	char adres[50];  
	int num;         
};

struct Train
{
	int numTrain;
	string stantion;
	int departureTime[2];
	int travelTime;
};


void RW(Student* human, int N) {		// Writing to a file Info.dat !!!
	ofstream inFile("Info.dat");

	for (size_t i = 0; i < N; i++)
	{
		cout << "Full name [" << i + 1 << ("]: ");
		cin >> human[i].surname>>human[i].name;
		cout << endl;

		cout << "Address [" << i + 1 << ("]: Str. ");
		cin >> human[i].adres;
		cout << endl;

		cout << "Phone number [" << i + 1 << ("]: ");
		cin >> human[i].num;
		cout << "-------------------------------------|" << endl;
		cout << endl;
	}

	inFile.write((char*)& human, sizeof(Student));
	inFile.close();
}      

void RD(Student* human, int N)		// Reading information from Info.dat !!!
{
	ifstream inFile("Info.dat");
	inFile.read((char*)& human, sizeof(Student));
	inFile.close();
}

void sort(Student* human, int N) //Sort students by their address
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (strcmp(human[i].adres, human[j].adres) > 0)
			{
				Student tmp = human[i];
				human[i] = human[j];
				human[j] = tmp;
			}
		}
	}
	cout << endl;

	for (int i = 0; i < N; i++)		
	{
		cout << human[i].surname << " " << human[i].name << endl;
		cout << human[i].adres << endl;
		cout << human[i].num << endl << endl;
	}
}; 


void RW(int size, Train* ptr)		// Writing to a file Info.txt !!!
{
	for (int i = 0; i < size; i++)
	{
		cout << "Train number: ";
		cin >> ptr[i].numTrain;

		cout << "Destination station: ";
		cin >> ptr[i].stantion;

		cout << "Departure time[Enter  hours:minutes]: ";
		cin >> ptr[i].departureTime[0] >> ptr[i].departureTime[1];


		cout << "Travel time [Enter hours]: ";
		cin >> ptr[i].travelTime;
		cout << endl;
	}

	ofstream outFile;
	outFile.open("Info.txt");

	int mas[2] = { 18,00 };
	for (int i = 0; i < size; i++)		//Checking trains leaving after 18:00
	{
		if (ptr[i].departureTime[0] == mas[0] || ptr[i].departureTime[0] > mas[0])
		{
		  outFile << "Train number: " << ptr[i].numTrain << ";" << endl
				  << "Destination station: " << ptr[i].stantion << ";" << endl
				  << "Departure time: " << ptr[i].departureTime[0] << ":" << ptr[i].departureTime[1] << ";" << endl
				  << "Travel time: " << ptr[i].travelTime << " hours;" << endl << endl;
		}
	}

}; 

void RD()		// Reading information from Info.txt !!!
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


int main()
{
	system("chcp 1251");
	system("cls");

	int size;
	cout << "Amount of students: ";
	cin >> size;
	cout << endl;
	Student* human = new Student[size];

	RD(human, size);
	RW(human, size);

	sort(human, size);
	cout << "-------------------------------------|" << endl;
	delete[] human;


	int trainCount;
	cout << "Number of trains: ";
	cin >> trainCount;
	cout << endl;
	Train* ptr = new Train[trainCount];

	RW(trainCount, ptr);
	RD();
	delete[] ptr;

	return 0;
}


