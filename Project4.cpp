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
double totalExpenses = 0; //variable for total expenses of trip

int daysSpent();
void times (double &, double &);
bool isValidTime (double);
double airFare ();
double carRental ();
double vehicle ();
double parking (int);
double taxi (int);
double registration ();
double hotel (int); 
double getBreakfast();
double getLunch();
double getDinner();

int main()
{	
	double allowedExpenses = 0; //variable for allowed expenses of trip
	
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
		cout << "Enter number of days spent on the trip: ";
		cin >> days;
		
		if (days < 1)
			cout << "Error. Only numbers greater than 0 accepted." << endl;
	} while (days < 1);
	
	return days;
}

// ********************************************************
// The times function asks for the time of departure and  *
// the time of return. The times are validated and stored *
// in the reference parameter variables: start and end.   *
// ********************************************************
void times (double &start, double &end)
{
	do 
	{
		cout << "Enter the departure time (HH.MM): ";
		cin >> start;
		
		if (!isValidTime(start))
			cout << "Error. Only valid times accepted." << endl;
	} while (!isValidTime(start));
	
	do
	{
		cout << "Enter the return time (HH.MM): ";
		cin >> end;
		
		if (!isValidTime(end))
			cout << "Error. Only valid times accepted." << endl;
	} while (!isValidTime(end));
}

// ********************************************************
// The isValidTime function accepts a double argument     *
// assumed to be a time in the 24 hour format of HH.MM.   *
// The value is tested, and if it is valid the function   *
// returns true. Otherwise it returns false.              *
// ********************************************************
bool isValidTime (double time)
{
	int hoursOnly = time;
	double minOnly = time - hoursOnly;
	bool status = false;
	
	if (time >= 0.0 && time < 24.60 && minOnly <=0.59)
		status = true;
	
	return status;
}

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
		cout << "Enter amount of airfare: ";
		cin >> airFare;
		
		if (airFare < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
	} while (airFare < 0.0);
	
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
		cout << "Enter amount of car rental fees: ";
		cin >> rentals;
		
		if (rentals < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
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
		cout << "Enter number of miles driven via private vehicle: ";
		cin >> miles;
		
		if (miles < 0)
			cout << "Error. Only positive numbers accepted." << endl;
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
		cout << "Enter amount of parking fees: ";
		cin >> parkingFees;
		
		if (parkingFees < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
	} while (parkingFees < 0.0);
	
	totalExpenses += parkingFees;
	
	allowedFees = days * DAILYALLOWPARKING;
	
	if (parkingFees > allowedFees)
		parkingFees = allowedFees;
	
	return parkingFees;
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
		cout << "Enter amount of taxi fees: ";
		cin >> taxiFees;
		
		if (taxiFees < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
	} while (taxiFees < 0.0);
	
	totalExpenses += taxiFees;
	
	allowedFees = days * DAILYALLOWTAXI;
	
	if (taxiFees > allowedFees)
		taxiFees = allowedFees;
	
	return taxiFees;
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
		cout << "Enter amount of registration fees: ";
		cin >> regFees;
		
		if (regFees < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
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
	double hotelBill;
	double allowedFees;
	
	do
	{
		cout << "Enter the nightly hotel rate: ";
		cin >> rate;
		
		if (rate < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
	} while (rate < 0.0);
	
	hotelBill = rate * days;
	totalExpenses += hotelBill;
	
	allowedFees = days * DAILYALLOWHOTEL;
	
	if (hotelBill > allowedFees)
		hotelBill = allowedFees;
	
	return hotelBill;
}

// ********************************************************
// The meals function calls the getBreakfast, getLunch,   *
// and getDinner functions to calculate the employee's    *
// meal expenses. The expenses are added to the           *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************
double meals(int days, double timeDepart, double timeArrive)
{
	double allowedTotal = 0;

	for (n = 1; n <= days; n++)
	{
		if (n = 1 && timeDepart < 7.00)
		{
			allowedTotal += getBreakfast();
			allowedTotal += getLunch();
			allowedTotal += getDinner();
		}
		else if (n = 1 && timeDepart < 12.00)
		{
			allowedTotal += getLunch();
			allowedTotal += getDinner();
		}
		else if (n = 1 && timeDepart < 18.00)
		{
			allowedTotal += getDinner();
		}
		else if (n = days && timeArrive > 8.00)
		{
			allowedTotal += getBreakfast();
		}
		else if (n = days && timeArrive > 13.00)
		{
			allowedTotal += getBreakfast();
			allowedTotal += getLunch();
		}
		else if (n = days && timeArrive > 19.00)
		{
			allowedTotal += getBreakfast();
			allowedTotal += getLunch();
			allowedTotal += getDinner();
		}
		else if (n > 1 && n < days)
		{
			allowedTotal += getBreakfast();
			allowedTotal += getLunch();
			allowedTotal += getDinner();
		}
	}
}

// ********************************************************
// The getBreakfast function asks the user for the amount *
// spent on a breakfast meal. The expenses are added to   *
// the totalExpenses global variable. Allowable expenses  *
// are returned as a double.                              *
// ********************************************************
double getBreakfast()
{
	double amount;

	do
	{
		cout << "Enter amount spent for breakfast: ";
		cin >> amount;

		if (amount < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
	} while (amount < 0.0);

	totalExpenses += amount;

	if (amount > ALLOWEDBREAKFAST)
		amount = ALLOWEDBREAKFAST;

	return amount;
}

// ********************************************************
// The getLunch function asks the user for the amount     *
// spent on a lunch meal. The expenses are added to the   *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************
double getLunch()
{
	double amount;

	do
	{
		cout << "Enter amount spent for lunch: ";
		cin >> amount;

		if (amount < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
	} while (amount < 0.0);

	totalExpenses += amount;

	if (amount > ALLOWEDLUNCH)
		amount = ALLOWEDLUNCH;

	return amount;
}

// ********************************************************
// The getDinner function asks the user for the amount    *
// spent on a dinner meal. The expenses are added to the  *
// totalExpenses global variable. Allowable expenses are  *
// returned as a double.                                  *
// ********************************************************
double getDinner()
{
	double amount;

	do
	{
		cout << "Enter amount spent for dinner: ";
		cin >> amount;

		if (amount < 0.0)
			cout << "Error. Only amounts greater than $0.00 accepted." << endl;
	} while (amount < 0.0);

	totalExpenses += amount;

	if (amount > ALLOWEDDINNER)
		amount = ALLOWEDDINNER;

	return amount;
}