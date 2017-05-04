// ArrayOfEnglishDistances.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Distance.h"


int main()
{
	const int MAX = 4;
	Distance dist[MAX]; // array of distances
	int n = 0; // count the entries
	char ans; // user response 'y' or 'n'


	do { 
		if (n >= MAX)
		{
			std::cout << "Array is full!!!!!" << std::endl;
			break;
		}
			std::cout << "Enter distance number " << n + 1 << " "; // get distance form user
			dist[n++].getDistance(); // store distance in array
			std::cout << "Do you want provide another distance (y/n)?"; 
			std::cin >> ans;
	} while (ans != 'n' && ans != 'N'); //quit if user types n
	
	for (int j = 0; j < n; j++) // display distances
	{
		std::cout << "Distance number: " << j + 1 << " is ";
		dist[j].showDistance();
		std::cout << std::endl;
	}

	system("pause");
    return 0;
}

