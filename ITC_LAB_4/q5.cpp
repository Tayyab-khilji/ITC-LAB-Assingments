#include <iostream>
using namespace std;
int main()
{
	int Table = 13;
	int counter = 1;
	int result = 0;
	result = Table * counter;
	cout << Table << " x " << counter << " = " << result << endl;
	counter = counter + 1;
	result = Table * counter;
	cout << Table << " x " << counter << " = " << result << endl;
	counter = counter + 1;
	result = Table * counter;
	cout << Table << " x " << counter << " = " << result << endl;
	counter = counter + 1;
	result = Table * counter;
	cout << Table << " x " << counter << " = " << result << endl;
	counter = counter + 1;
	result = Table * counter;
	cout << Table << " x " << counter << " = " << result << endl;
	return 0;
}