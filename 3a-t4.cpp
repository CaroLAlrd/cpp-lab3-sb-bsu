#include<iostream>
using namespace std;
int main()
{
	int k, i = 1, sum_k = 0, number;
	cout << " Enter the amount of integers to sum = "; cin >> k;
	if (k == 0) //The use of condition under which, by logical circumstances, the sum of all values ,if there no values actually, will be equal to zero
		cout << "The total sum is 0 ";
		return 0;
	do {
		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		sum_k += number; i++;
	} while (i <= k);
	cout << " The total sum of " << k << " integers is: " << sum_k;
	return 0;
}

