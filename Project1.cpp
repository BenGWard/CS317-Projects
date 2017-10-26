//	Class:		CS317
//	Name:		Ben Ward

#include <iostream>	//for cin & cout
#include <iomanip>	//for setw
#include <cmath>	//for pow function

using namespace std;

int main()
{	
	//constant variables
	const int FIRSTVOLTAGE = 20;
	const int SECONDVOLTAGE = 35;
	const int THIRDVOLTAGE = 15;
	const int FOURTHVOLTAGE = 6;
	const int FIRSTRESISTANCE = 10;
	const int SECONDRESISTANCE = 1000;
	const float FIRSTTIMECONSTANT = 0.16;
	const float SECONDTIMECONSTANT = 0.55;
	const float THIRDTIMECONSTANT = 2.6;
	const float FOURTHTIMECONSTANT = 0.044;
	const float EULERSNUMBER = 2.71828;
	
	//variables to store time data
	float firstTime;
	float secondTime;
	float thirdTime;
	float fourthTime;
	float fifthTime;
	float sixthTime;
	float seventhTime;
	float eighthTime;
	float ninthTime;
	
	//prompt to get time values from user
	cout << endl << "Enter the nine times seperated by a space: " << endl;
	cin >> firstTime >> secondTime >> thirdTime >> fourthTime >> fifthTime;
	cin >> sixthTime >> seventhTime >> eighthTime >> ninthTime;
	
	//this section declares current variables and does calculations
	float firstCurrent = (static_cast<float>(FIRSTVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-firstTime/FOURTHTIMECONSTANT));
	float secondCurrent = (static_cast<float>(SECONDVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-secondTime/FIRSTTIMECONSTANT));
	float thirdCurrent = (static_cast<float>(SECONDVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-thirdTime/FIRSTTIMECONSTANT));
	float fourthCurrent = (static_cast<float>(SECONDVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-fourthTime/FIRSTTIMECONSTANT));
	float fifthCurrent = (static_cast<float>(SECONDVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-fifthTime/FIRSTTIMECONSTANT));
	float sixthCurrent = (static_cast<float>(THIRDVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-sixthTime/SECONDTIMECONSTANT));
	float seventhCurrent = (static_cast<float>(THIRDVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-seventhTime/SECONDTIMECONSTANT));
	float eighthCurrent = (static_cast<float>(THIRDVOLTAGE)/FIRSTRESISTANCE) * pow(EULERSNUMBER, (-eighthTime/SECONDTIMECONSTANT));
	float ninthCurrent = (static_cast<float>(FOURTHVOLTAGE)/SECONDRESISTANCE) * pow(EULERSNUMBER, (-ninthTime/FOURTHTIMECONSTANT));
	
	//this section is the output of the table of data
	//I have wrapped around my cout statements to make them visable on one page
	cout << setprecision(3) << fixed;
	cout << endl << endl;
	
	cout << "Voltage V" << setw(15) << "Resistance R" << setw(11) << "RC";
	cout << setw(21) << "Time t" << setw(15) << "Current i" << endl;
	
	cout << "(Volts)" << setw(13) << "(Ohms)" << setw(22) << "(Time Constant)";
	cout << setw(15) << "(Seconds)" << setw(13) << "(Amps)" << endl;
	
	cout << setw(4) << FIRSTVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << FOURTHTIMECONSTANT << setw(19) << firstTime << setw(15) << firstCurrent << endl; 
	
	cout << setw(4) << SECONDVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << FIRSTTIMECONSTANT << setw(19) << secondTime << setw(15) << secondCurrent << endl;
	
	cout << setw(4) << SECONDVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << FIRSTTIMECONSTANT << setw(19) << thirdTime << setw(15) << thirdCurrent << endl;
	
	cout << setw(4) << SECONDVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << FIRSTTIMECONSTANT << setw(19) << fourthTime << setw(15) << fourthCurrent << endl;
	
	cout << setw(4) << SECONDVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << FIRSTTIMECONSTANT << setw(19) << fifthTime << setw(15) << fifthCurrent << endl;
	
	cout << setw(4) << THIRDVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << SECONDTIMECONSTANT << setw(19) << sixthTime << setw(15) << sixthCurrent << endl;
	
	cout << setw(4) << THIRDVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << SECONDTIMECONSTANT << setw(19) << seventhTime << setw(15) << seventhCurrent << endl;
	
	cout << setw(4) << THIRDVOLTAGE << setw(14) << FIRSTRESISTANCE << setw(18);
	cout << SECONDTIMECONSTANT << setw(19) << eighthTime << setw(15) << eighthCurrent << endl;
	
	cout << setw(4) << FOURTHVOLTAGE << setw(14) << SECONDRESISTANCE << setw(18);
	cout << THIRDTIMECONSTANT << setw(19) << ninthTime << setw(15) << ninthCurrent << endl;
		
	return (0);
}