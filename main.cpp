#include <iostream>
#include <fstream>
#include <cmath>
#include <limits>
#include <complex>
#include <string>

//ofstream: write on files
//ifstream: read from files
//fstream: read and write from/to files

using namespace std;
ifstream myFile;
string excuse;
string output;
int choice;
string line;
int statement(int choice);
int main()
{
	cout << "Welcome to Dr. Excuse \n\n\n" << endl;
	cout << "Main Menu \n " << endl;
	cout << "1: List of Excuses \n" << endl;
	cout << "2: Random Excuse \n" << endl;
	cout << "3: New excuse \n" << endl;
	cin >> choice;
	statement(choice);

	//cout << excuse << endl;
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}
int statement(int choice) 
{
	ifstream myFile("book.txt", ifstream::in);

	switch (choice)		
	{
		case 1:
				cout << "You chose 1: List: \n . \n .. \n ..." << endl;
				if (myFile.is_open())
				{
					while (getline(myFile, line))
					{
						cout << line << '\n';
					}
					myFile.close();
				}

				else{
					cout << "Program code 526 \n Unable to open file";
				}
					break;

		case 2:
			//myFile.open("book.txt");
			//myFile << "Reading this to a file .\n " << endl;
			//myFile.close();
			break;
		case 3:
			cout << "You chose 3: ...... " << endl;
			cout << "Type in your statment " << endl;
		//	cin >> excuse;
			cin.ignore();
			getline(cin, excuse);


			break;
		default:
			break;
	}
	return 1;
}
