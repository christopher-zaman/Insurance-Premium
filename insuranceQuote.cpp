#include <iostream>

using namespace std;

int main()
{
	int age;
	int MonthlyPremium = 50;
	int accident;
	cout << "Enter your age" << endl;
	cin >> age;
	if (age <= 25)
	{
		MonthlyPremium += 100;
	}

	else if (age <= 35)
	{
		MonthlyPremium += 20;
	}

	cout << "How many accidents have you had within the last five years?" << endl;
	cin >> accident;
	if (accident < 2)
	{
		cout << "Your monthly premium is $" << MonthlyPremium << endl;
		cout << endl;
	}
	else if (accident <= 2)
	{
		MonthlyPremium += 80;
		cout << "Your monthly premium is $" << MonthlyPremium << endl;
		cout << endl;
	}
	else if (accident <= 3)
	{
		MonthlyPremium += 180;
		cout << "Your monthly premium is $" << MonthlyPremium << endl;
		cout << endl;
	}
	else if (accident <= 4)
	{
		MonthlyPremium += 240;
		cout << "Your monthly premium is $" << MonthlyPremium << endl;
		cout << endl;
	}
	else if (accident >= 5)
	{
		cout << "We cannot insure." << endl;
	}
	system("pause");
	return 0;
}