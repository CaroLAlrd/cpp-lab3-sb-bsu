#include<iostream>
#include<limits> //adding library for some new features
using namespace std;

int main()
{
	int k, i = 1, sum_k = 0, number;
	cout << " Enter the amount of integers to sum = "; cin >> k;
	if (k == 0) //The use of condition under which, by logical circumstances, the sum of all values ,if there no values actually, will be equal to zero
		cout << "The total sum is 0 ";
	else {
		
	  do {

		cout << "Enter integer nr. " << i << ": ";
		cin >> number;

		while (1)

		{

		if (cin.fail())

			{

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // setting limits
			cout << "Nahh, my dear, this is wrong, could you be so kind and try again?" << endl;
			cin >> number;

			}

			if (!cin.fail())
			
			break;

		}
		
		    sum_k += number; i++;


	    } while (i <= k);
		cout << " The total sum of " << k << " integers is: " << sum_k;
	}

	return 0;


