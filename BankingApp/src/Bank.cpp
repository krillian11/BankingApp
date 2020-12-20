/*
 * Bank.cpp
 *
 *  Created on: Nov 30, 2020
 *      Author: Kainan Woodard
 */
#include <iostream>
#include <iomanip>
using namespace std;

void printWithDeposits(double initialInvest, double monthlyDepo, double annualInt, int numYears){
	int year = 0;
	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << endl;
	cout << fixed;
	cout << setprecision(2);
	cout << "Year" << setw(20) << "Opening Amount" << setw(22) << "Deposited Amount" << setw(13) << "$ Total" << setw(13) << "$ Interest" << setw(21) << " Closing Balance" << endl;
	for(int i = 1; i <= (numYears * 12); i++){
		if(i % 12 == 0){
			year++;
			double total = (monthlyDepo + initialInvest);
			double interestAmount = (initialInvest + monthlyDepo) * ((annualInt/100)/12);
			cout << year << setw(13) << initialInvest << setw(20) << monthlyDepo << setw(22) << total << setw(13) << interestAmount << setw(13) << total + interestAmount << endl;
			initialInvest = total + interestAmount;
		}else {
		double total = (monthlyDepo + initialInvest);
		double interestAmount = (initialInvest + monthlyDepo) * ((annualInt/100)/12);
		//cout << i << "\t" << initialInvest << "\t" << monthlyDepo << "\t" << total << "\t" << interestAmount << "\t" << total + interestAmount << endl;
		initialInvest = total + interestAmount;
		}
	}
}

void printWithZeroDeposits(double initialInvest, double annualInt, int numYears){
	int year = 0;
	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << endl;
	cout << fixed;
	cout << setprecision(2);
	cout << "Year" << setw(20) << "Opening Amount" << setw(22) << "Deposited Amount" << setw(13) << "$ Total" << setw(13) << "$ Interest" << setw(21) << " Closing Balance" << endl;
	for(int i = 1; i <= (numYears * 12); i++){
		if(i % 12 == 0){
			year++;
			double total = initialInvest;
			double interestAmount = (initialInvest) * ((annualInt/100)/12);
			cout << year << setw(13) << initialInvest << setw(20) << 0.00 << setw(22) << total << setw(13) << interestAmount << setw(13) << total + interestAmount << endl;
			initialInvest = total + interestAmount;
		}else {
		double total = (initialInvest);
		double interestAmount = (initialInvest) * ((annualInt/100)/12);
		initialInvest = total + interestAmount;
		}
	}

}
int main(){
double initialInvest,monthlyDepo,annualInt;
int numYears;

	cout << "Initial Investment Amount: " << endl;
		cout << "Monthly Deposit: " << endl;
		cout << "Annual Interest: " << endl;
		cout << "Number of years: " << endl;

		cout << "Initial Investment Amount: " << endl;
		cin >> initialInvest;
		cout << "Monthly Deposit: " << endl;
		cin >> monthlyDepo;
		cout << "Annual Interest: " << endl;
		cin >> annualInt;
		cout << "Number of years: " << endl;
		cin >> numYears;

		printWithDeposits(initialInvest,monthlyDepo,annualInt,numYears);
		cout << endl;
		printWithZeroDeposits(initialInvest,annualInt,numYears);

	return 0;
}




