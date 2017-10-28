//	Class:		CS317
//	Name:		Ben Ward
//	Title:		Project 3

#include <iostream>
#include <fstream> //needed for reading and writing files
#include <iomanip> //needed for setprecision and setw

using namespace std;

int main()
{	
	//constants for interest rates
	//they are divided by 12 to convert annual to monthly
	const float TYPEONEINTEREST = .06/12;
	const float TYPETWOINTEREST = .04/12;
	const float TYPETHREEINTEREST = .025/12;
	const float TYPEFOURINTEREST = .012/12;
	
	//variables to hold running totals to be printed at the end
	double totalCurrBal = 0.0;
	double totalInterestPaid = 0.0;
	double totalNewBal = 0.0;
	
	int accountNumber;
	double accountBal;
	int accountType;
	double interestPaid;
	double newAccountBal;
	
	//code to open file and prepare it for reading
	ifstream inFile;
	inFile.open("bank.txt");
	
	//code to open file and prepare it for writing
	ofstream outFile;
	outFile.open("report.txt");
	
	//output name and headers to file
	outFile << "Ben Ward" << endl;
	outFile << setw(17) << "Account Number" << setw(18) << "Current Balance";
	outFile << setw(16) << "Interest Paid" << setw(14) << "New Balance" << endl;
	
	//code for money formatting
	outFile << setprecision(2) << fixed;
	
	while(inFile >> accountNumber)
	{
		inFile >> accountBal >> accountType;
		
		switch(accountType)
		{
			case 1:
				interestPaid = accountBal * TYPEONEINTEREST;
				break;
			case 2:
				interestPaid = accountBal * TYPETWOINTEREST;
				break;
			case 3:
				interestPaid = accountBal * TYPETHREEINTEREST;
				break;
			case 4:
				interestPaid = accountBal * TYPEFOURINTEREST;
				break;
			default:
			{	
				cout << "Something went wrong. Run program again.";
				return 0;
			}
		}
	
		//calculate new account balance
		newAccountBal = accountBal + interestPaid;
		
		//calculate running totals
		totalCurrBal = totalCurrBal + accountBal;
		totalInterestPaid = totalInterestPaid + interestPaid;
		totalNewBal = totalNewBal + newAccountBal;
		
		
		//output data to file
		outFile << setw(17) << accountNumber << setw(18) << accountBal;
		outFile << setw(16) << interestPaid << setw(14) << newAccountBal << endl;
	}
	
	//output totals to file
	outFile << setw(17) << "Total" << setw(18) << totalCurrBal;
	outFile << setw(16) << totalInterestPaid << setw(14) << totalNewBal;
	
	//code to close files
	inFile.close();
	outFile.close();
	
	//output just to let the user know the program ran ok
	cout << endl << "Complete." << endl;
	
	return 0;
}