#include <iostream>
using namespace std;
int main()
{
	double var1 = 3;
	double var2 = 2;


	cout << "Addition = "     << var1 + var2 << endl;
	cout << "Subtraction = "  << var1 - var2 << endl;
	cout << "Multiplication = "<< var1 * var2 << endl;
	cout << "Division = "     << var1 / var2 << endl;

	return 0;
}
// The reason c++ showed 3/2 = 1 is because we were using 
//  int type variable, and the original value for 3/2 is a float 
//  digit so we need to change it into double type variable.