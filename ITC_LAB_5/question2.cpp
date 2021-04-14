#include <iostream>
using namespace std;
int main()
{
	int principle,rate,time;
	cout << "Please enter a principle ";
	cin >> principle;
	cout << "Please enter a rate ";
	cin >> rate;
	cout << "Please enter a time ";
	cin >> time;
	double result_1= principle * rate * time;
	double result = result_1 / 100;
	cout <<  result << endl ;
	return 0;
}