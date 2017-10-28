//	Class:		CS317
//	Name:		Ben Ward
//	Title:		Project 4

#include <iostream>
#include <iomanip> //needed for setprecision and setw

using namespace std;

//global constants
const double VEHICLEEXPENSE = 0.27;
const int DAILYALLOWPARKING = 6;
const int DAILYALLOWTAXI = 10;
const int DAILYALLOWHOTEL = 90;
const int ALLOWEDBREAKFAST = 9;
const int ALLOWEDLUNCH = 12;
const int ALLOWEDDINNER = 16;

//global variables
double totalExpenses = 0;

int main()
{	
	return 0;
}


// ********************************************************
// The daysSpent function asks for the number of days     *
// spent on the trip and returns the value as an integer. *
// ********************************************************
int daysSpent()
{
	int days;
	
	do
	{
		cout << "Enter number of days spent on the trip:";
		cin >> days;
	} while (days < 1);
	
	return days;
}

// ********************************************************
// The times function asks for the time of departure and  *
// the time of return. The times are validated and stored *
// in the reference parameter variables: start and end.   *
// ********************************************************


// ********************************************************
// The isValidTime function accepts a double argument     *
// assumed to be a time in the 24 hour format of HH.MM.   *
// The value is tested, and if it is valid the function   *
// returns true. Otherwise it returns false.              *
// ********************************************************

// ********************************************************
// The airFare function asks the user to enter the amount *
// of any airfare the employee incurred, adds the value   *
// to the totalExpenses, and returns the airfare amount   *
// as a double.                                           *
// ********************************************************
double airFare ()
{
	double airFare;
	
	do
	{
		cout << "Enter amount of airfare:";
		cin >> airFare;
	} while (fare < 0.0);
	
	totalExpenses += airFare;
	
	return airFare;
}

// ********************************************************
// The carRental function asks the user to enter the      *
// amount of car rental fees the employee incurred, adds  *
// the value to the totalExpenses, and returns the amount *
// of car rental fees as a double.                        *
// ********************************************************
double carRental ()
{
	double rentals;
	
	do
	{
		cout << "Enter amount of car rental fees:";
		cin >> rentals;
	} while (rentals < 0.0);
	
	totalExpenses += rentals;
	
	return rentals;
}

// ********************************************************
// The vehicle function asks the user to enter the number *
// of miles a private vehicle was driven.The expenses are *
// added to the totalExpenses global variable. Allowable  *
// expenses are returned as a double.                     *
// ********************************************************
double vehicle ()
{
	int miles;
	double milesExpense;
	
	do
	{
		cout << "Enter number of miles driven via private vehicle:";
		cin >> miles;
	} while (miles < 0);
	
	milesExpense = miles * VEHICLEEXPENSE;
	totalExpenses += milesExpense;
	
	return milesExpense;
}

// ********************************************************
// The parking function asks the user to enter the amount *
// of any parking fees. The expenses are added to the     *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************
double parking (int days)
{
	double parkingFees;
	double allowedFees;
	
	do
	{
		cout << "Enter amount of parking fees:";
		cin >> parkingFees;
	} while (parkingFees < 0.0);
	
	totalExpenses += parkingFees;
	
	allowedFees = days * DAILYALLOWPARKING;
	
	if (parkingFees <= allowedFees)
		allowedFees = parkingFees;
	
	return allowedFees;
}

// ********************************************************
// The taxi function asks the user to enter the amount    *
// of any taxi fees. The expenses are added to the        *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************
double taxi (int days)
{
	double taxiFees;
	double allowedFees;
	
	do
	{
		cout << "Enter amount of taxi fees:";
		cin >> taxiFees;
	} while (taxiFees < 0.0);
	
	totalExpenses += taxiFees;
	
	allowedFees = days * DAILYALLOWTAXI;
	
	if (taxiFees <= allowedFees)
		allowedFees = taxiFees;
	
	return allowedFees;
}

// ********************************************************
// The registration function asks the user to enter the   *
// amount of conference registration fees incurred by the *
// employee, adds the amount to totalExpenses, and        *
// returns the amount spent as a double.                  *
// ********************************************************
double registration ()
{
	double regFees;
	
	do
	{
		cout << "Enter amount of registration fees:";
		cin >> regFees;
	} while (regFees < 0.0);
	
	totalExpenses += regFees;
	
	return regFees;
}

// ********************************************************
// The hotel function asks the user to enter the amount   *
// of hotel expenses. The expenses are added to the       *
// totalExpenses global variable. Allowable expenses are  * 
// returned as a double.                                  *
// ********************************************************
double hotel (int days)
{
	double rate;
	double total;
	double allowedFees;
	
	do
	{
		cout << "Enter the nightly hotel rate:";
		cin >> rate;
	} while (rate < 0.0);
	
	total = rate * days;
	totalExpenses += total;
	
	allowedFees = days * DAILYALLOWHOTEL;
	
	if (total <= allowedFees)
		allowedFees = total;
	
	return allowedFees;
}

// ********************************************************
// The meals function calls the getBreakfast, getLunch,   *
// and getDinner functions to calculate the employee's    *
// meal expenses. The expenses are added to the           *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************


// ********************************************************
// The getBreakfast function asks the user for the amount *
// spent on a breakfast meal. The expenses are added to   *
// the totalExpenses global variable. Allowable expenses  *
// are returned as a double.                              *
// ********************************************************


// ********************************************************
// The getLunch function asks the user for the amount     *
// spent on a lunch meal. The expenses are added to the   *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************

// ********************************************************
// The getDinner function asks the user for the amount    *
// spent on a dinner meal. The expenses are added to the  *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************
