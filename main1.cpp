/*Project 1
    Name: Stephany Murillo Munoz and Andrewdai Truong
    Algorithm 1: Wildlife Monitoring System
    Class: CPSC-335-06
-------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

// structure for a coordinate
struct Coordinate
{
	int stepNum; // movement number starting at 0
	int loc; // animal's location 
};

// function prototypes
void traverseLocations(vector<int> location);

// main
int main()
{
	int 					numCoord; 		// number of coordiantes
	vector<Coordinate>		coordinates; 	// a vector of the coordinates
	Coordinate 				node;	

	// promput user for number of coordinates
	cout << "Enter number of recorded coordinates: ";
	cin >> numCoord;

	// promput user for the  coordinates
	cout << "Enter the coordinates: ";
	for (int i = 0; i < numCoord; ++i)
	{
		cin >> node.stepNum;
		cin >> node.loc;
		coordinates.push_back(node);
	}

	// create vector of ints to hold location values
	vector<int>				location(numCoord);
	for (int i = 0; i < numCoord; ++i)
	{
		location[i] = coordinates[i].loc;
	}

	traverseLocations(location);
	
	return 0;
}

void traverseLocations(vector<int> loc)
{
	bool cycleDetected = false;

	// traverse through locations until a cycle is detected
	for (unsigned int i = 0; i < loc.size(); ++i)
	{
		for (unsigned int j = i + 1; j < loc.size(); ++j)
		{
			if (loc[i] == loc[j])
			{
				cout << "Loop detected" << endl;
				cycleDetected = true;
				break;
			}
		}
	}

	if (cycleDetected == false)
	{
		cout << "No loop detected" << endl;
	}
}
