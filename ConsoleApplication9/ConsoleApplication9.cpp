#include<iostream>
using namespace std;

int main()
{
	int choice, count, b;
	cout << "PRIME NUMBER IDENTIFIER";
	cout << "\n\nChoose one choice;";
	cout << "1. Range\n";
	cout << "2. Individual Number";
	cout << "\nYour choice number  = ";
	int Choice;
	cin >> Choice;
	if (Choice == 1)
	{
		cout << "Select the Range";
		cout << "\nStart of Range = ";
		int startofrange;
		cin >> startofrange;
		cout << "\nEnd of Range = ";
		int endofrange;
		cin >> endofrange;

		cout << "The Prime Number In This Range Are = ";

		for (int a = startofrange; a <= endofrange; a++)
		{
			count = 0;
			for (b = 1; b <= a; b++)
			{
				if (a % b == 0)
				{
					count++;
				}
			}
			if (count == 2)
			{
				cout << a << " ";
			}
		}
	}
	if (Choice == 2)
	{
		cout << "Individual Number Selected";
		cout << "\nEnter your Number = ";
		int num;
		cin >> num;
		count = 0;
		for (b = 1; b <= num; b++)
		{
			if (num % b == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			cout << num << " is a Prime Number";
		}
		else
		{
			cout << num << " is not a Prime Number";
		}

	}
	return 0;
}

