#include<iostream>
#include<map>
using namespace std;

map<int, string> TheColorCodes;

void insertColorCodes()
{
	TheColorCodes[1] = { "White Blue" };
	TheColorCodes[2] = { "White Orange" };
	TheColorCodes[3] = { "White Green" };
	TheColorCodes[4] = { "White Brown" };
	TheColorCodes[5] = { "White Slate" };
	TheColorCodes[6] = { "Red Blue" };
	TheColorCodes[7] = { "Red Orange" };
	TheColorCodes[8] = { "Red Green" };
	TheColorCodes[9] = { "Red Brown" };
	TheColorCodes[10] = { "Red Slate" };
	TheColorCodes[11] = { "Black Blue" };
	TheColorCodes[12] = { "Black Orange" };
	TheColorCodes[13] = { "Black Green" };
	TheColorCodes[14] = { "Black Brown" };
	TheColorCodes[15] = { "Black Slate" };
	TheColorCodes[16] = { "Yellow Blue" };
	TheColorCodes[17] = { "Yellow Orange" };
	TheColorCodes[18] = { "Yellow Green" };
	TheColorCodes[19] = { "Yellow Brown" };
	TheColorCodes[20] = { "Yellow Slate" };
	TheColorCodes[21] = { "Violet Blue" };
	TheColorCodes[22] = { "Violet Orange" };
	TheColorCodes[23] = { "Violet Green" };
	TheColorCodes[24] = { "Violet Brown" };
	TheColorCodes[25] = { "Violet Slate" };



}

void printColorCodes()
{
	for (auto it = TheColorCodes.begin(); it != TheColorCodes.end(); ++it)
	{
		
		cout << it->first << "   " << it->second << endl;

	}
}
