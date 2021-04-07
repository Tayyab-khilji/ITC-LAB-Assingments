#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a Number: ";
	cin >> num;
	if (num % 2 == 0)
		cout << "It is an Even Number.";
	else
		cout << "It is an Odd Number.";
	cout << endl;
	return 0;
}