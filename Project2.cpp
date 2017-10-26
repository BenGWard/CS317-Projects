//	Class:		CS317
//	Name:		Ben Ward

#include <iostream>	
#include <iomanip> //needed for setprecision

using namespace std;

int main()
{	
	//constant variables
	int REGBASECOST = 6;
	int REGFREEMIN = 50;
	float REGMINCOST = 0.20;
	int PREBASECOST = 15;
	int PREDAYFREEMIN = 75;
	float PREDAYMINCOST = 0.10;
	int PRENIGHTFREEMIN = 100;
	float PRENIGHTMINCOST = 0.05;
	
	//variables
	int accountNumber;
	char serviceCode;
	int minutesUsedDay;
	int minutesUsedNight;
	float amountDue = 0.0;    //just to be sure we start at 0
	
	cout << endl << "\t\t\tWardPhone" << endl << endl << endl;
	cout << "Please enter account number: ";
	cin >> accountNumber;
	if (accountNumber < 0)
			{
				cout << "You have entered a negative number. Please run program again." << endl;
				return 0;
			}
	cout << "Please enter service type, premium or regular (P/R): ";
	cin >> serviceCode;
	
	switch (serviceCode)
	{
		case 'P':
		case 'p':
			cout << endl << "Enter number of minutes used 6:00am to 6:00pm: ";
			cin >> minutesUsedDay;
			cout << "Enter number of minutes used 6:00pm to 6:00am: ";
			cin >> minutesUsedNight;
	
			//validates that the minutes input are positive
			if (minutesUsedDay < 0 || minutesUsedNight < 0)
			{
				cout << "You have entered a negative number. Please run program again." << endl;
				return 0;
			}
			
			//this section checks to see if they have used more than
			//the free included minutes and calculates the bill
			if (minutesUsedDay > PREDAYFREEMIN)
			{
				amountDue = PREBASECOST + (minutesUsedDay - PREDAYFREEMIN) * PREDAYMINCOST;
			}
		
			else
			{
				amountDue = PREBASECOST;
			}
		
			if (minutesUsedNight > PRENIGHTFREEMIN)
			{
				amountDue = amountDue + (minutesUsedNight - PRENIGHTFREEMIN) * PRENIGHTMINCOST;
			}
		
			//output to user
			cout << endl << endl << endl;
			cout << "*******************************************************" << endl;
			cout << "Account Number:" << accountNumber << endl << endl;
			cout << "Premium Service" << endl << endl;
			cout << "Minutes used 6:00am to 6:00pm: " << minutesUsedDay << endl;
			cout << "Minutes used 6:00pm to 6:00am: " << minutesUsedNight << endl;
			
			//set up output for money
			cout << setprecision(2) << fixed;
			cout << endl << "____________________" << endl;
			cout << "Amount Due: $" << amountDue << endl;
		
			break;
		
		case 'R':
		case 'r':
			cout << endl << "Enter number of minutes used: ";
			cin >> minutesUsedDay;
			
			//validates that the minutes input are positive
			if (minutesUsedDay < 0)
			{
				cout << "You have entered a negative number. Please run program again." << endl;
				return 0;
			}
			
			//this section checks to see if they have used more than
			//the free included minutes and calculates the bill
			if (minutesUsedDay > REGFREEMIN)
			{
				amountDue = REGBASECOST + (minutesUsedDay - REGFREEMIN) * REGMINCOST;
			}
		
			else
			{
				amountDue = REGBASECOST;
			}
		
			//output to user
			cout << endl << endl << endl;
			cout << "*******************************************************" << endl;
			cout << "Account Number:" << accountNumber << endl << endl;
			cout << "Regular Service" << endl << endl;
			cout << "Minutes used: " << minutesUsedDay << endl;
			
			//set up output for money
			cout << setprecision(2) << fixed; 
			cout << endl << "____________________" << endl;
			cout << "Amount Due: $" << amountDue << endl;
		
			break;
		
		default:
			cout << "You have entered an invalid input. ";
			cout << "Only P, p, R, or r accepted. Please run program again." << endl;
	}
	
	return 0;
}