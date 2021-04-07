#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout << "Enter Number 1 = ";
	cin >> num1;
	cout << "\nEnter Number 2 = ";
	cin >> num2;

	int result = num1 + num2;
	cout << num1 << "+" << num2 << "=" << result << endl;
	result = num1 - num2;
	cout << num1 << "-" << num2 << "=" << result << endl;
	result = num1 * num2;
	cout << num1 << "*" << num2 << "=" << result << endl;
	result = num1 / num2;
	cout << num1 << "/" << num2 << "=" << result << endl;
	return 0;

}





