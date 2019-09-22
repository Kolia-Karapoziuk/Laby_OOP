#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Train
{
	int numTrain;
	string stantion;
	int departureTime;
};


int ReadSort(Train* arr)
{
	ifstream fin("Info.txt");

	int i = 0;
	if (!fin.is_open()) // if the file is not open
		cout << "The file cannot be opened!\n"; // to report it
	else
	{
		cout << "The file is open!\n";
		while (!fin.eof())
		{
			fin >> arr[i].numTrain;
			fin >> arr[i].stantion;
			fin >> arr[i].departureTime;
			i++;
		}

		int count = i;
		for (int i = 0; i < count - 1; i++)
		{
			for (int j = 0; j < count - 1; j++)
			{
				if (arr[j].departureTime < arr[j + 1].departureTime)
				{
					Train tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
		cout << endl;

		ofstream outFile;
		outFile.open("newFile.txt");

		int timer = 12;
		int tmp;

		cout << "Train number" << "\t" << "Destination station" << "\t" << "Departure time" << endl;
		outFile << "Train number" << "\t" << "Destination station" << "\t" << "Departure time" << endl;
		for (int i = 0; i < count; i++)		//Checking trains departing for 12:00
		{
			if (arr[i].departureTime < timer) {
				outFile << "      "
					<< arr[i].numTrain << " \t \t"
					<< arr[i].stantion << " \t	\t"
					<< arr[i].departureTime << endl;
			}

			cout << "     " << arr[i].numTrain << " \t\t" << arr[i].stantion << "\t\t\t" << arr[i].departureTime << endl << endl;
		}
	}
	return 3;
}


int main()
{
	Train* rea = new Train[50];
	ReadSort(rea);
	delete[] rea;

	return 0;
}
