#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	char ch;
	double startBal, annRate; //user initial inputs
	double monWithdrawal1, monWithdrawal2, monWithdrawal3, monthDep1, monthDep2, monthDep3; // user monthly inputs
	double monthRate, monthDividend1 = 0, monthendBal1 = 0, balanceSum1, monthDividend2 = 0, monthendBal2 = 0, balanceSum2, monthDividend3 = 0, monthendBal3 = 0, balanceSum3; //calculated variables
	double quartBal, quartDep, quartWithdrawal, quartInterest; //calculated quarterly amounts

	cout << "Enter starting balance? " << endl;
	cin >> startBal;
	cout << "Enter annual percentage rate? " << endl;
	cin >> annRate;
	monthRate = annRate / 12;
	
	cout << "Total monthly deposit amount for month 1? " << endl;
	cin >> monthDep1;

	balanceSum1 = monthDep1 + startBal;

	if (monthDep1 != 0)
	{
		cout << "Total monthly withdrawal amount? " << endl;
		cin >> monWithdrawal1;

		if (monWithdrawal1 != 0 && monWithdrawal1 < balanceSum1)
		{
			monthDividend1 = monthRate * (balanceSum1 -= monWithdrawal1);
			monthendBal1 = balanceSum1 + monthDividend1;
		}
		else
		{
			cout << "Verify input" << endl;
		}
	}
	else
	{
		cout << "Enter positive number" << endl;
	}
	cout << "Total monthly deposit amount for month 2? " << endl;
	cin >> monthDep2;
	balanceSum2 = monthDep2 + monthendBal2;
	if (monthDep2 != 0)
	{
		cout << "Total monthly withdrawal amount?" << endl;
		cin >> monWithdrawal2;

		if (monWithdrawal2 != 0 && monWithdrawal2 < balanceSum2)
		{
			monthDividend2 = monthRate * (balanceSum2 -= monWithdrawal2);
			monthendBal2 = balanceSum2 + monthDividend2;
		}
		else
		{
			cout << "Verify input" << endl;
		}
	}
	else
	{
		cout << "Enter a positive number" << endl;
	}
	cout << "Total monthly deposit amount for month 3? " << endl;
	cin >> monthDep3;

	balanceSum3 = monthDep3 + monthendBal2;
	if (monthDep3 != 0)
	{
		cout << "Total monthly withdrawal amount?" << endl;
		cin >> monWithdrawal3;

		if (monWithdrawal3 != 0 && monWithdrawal3 < balanceSum3)
		{
			monthDividend3 = monthRate * (balanceSum3 -= monWithdrawal3);
			monthendBal3 = balanceSum3 + monthDividend3;
		}
		else
		{
			cout << "Verify input" << endl;
		}
	}
	else
	{
		cout << "Enter a positive number" << endl;
	}
	quartDep = monthDep1 + monthDep2 + monthDep3;
	quartWithdrawal = monWithdrawal1 + monWithdrawal2 + monWithdrawal3;
	quartInterest = monthDividend1 + monthDividend2 + monthDividend3;
	quartBal = quartDep - quartWithdrawal + quartInterest;
	cout << endl;
	cout << "\nStarting Balance $" << startBal << endl;
	cout << "\nTotalquarterly deposits $" << quartDep << endl;
	cout << "\nTotal quarterly withdrawal $" << quartWithdrawal << endl;
	cout << "\nFinal balance $" << quartBal + startBal << endl;

	cin.get(ch);
	cout << endl;
	cin.get(ch);

	return 0;
}