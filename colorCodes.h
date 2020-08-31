#include<sstream>
using namespace std;

namespace colorCodes
{
	string getColorCodes(int numberOfMajorColors, int numberOfMinorColors) {

		int outer = 0, inner = 0, pairNumber = 1;
		string AllColorCodes = "";
		for (outer = 0; outer < numberOfMajorColors; outer++) {
			for (inner = 0; inner < numberOfMinorColors; inner++) {
				TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
				ostringstream ss;
				ss << pairNumber;
				string temp = ss.str() + " : " + colorPair.ToString();
				temp += "\n";
				AllColorCodes += temp;
				pairNumber++;
			}
		}
		return AllColorCodes;
	}
}
