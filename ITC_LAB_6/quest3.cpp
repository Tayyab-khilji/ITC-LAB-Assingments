#include<iostream>
using namespace std;

int main()
{
int num1, num2;
cout << "Rock=1 Paper=2 Scissors=3" <<endl;
cout <<"Player 1:";
cin >> num1;
cout <<"Player 2:";
cin >> num2;
if (num1 == num2 || num1>3 || num2>3)
{
cout <<"Invalid input try again:" <<endl;
}
if (num1 == 1 && num2 == 2 || num1 == 2 && num2 == 3 || num1 == 3 && num2 == 1)
{
cout <<"Player 2 wins !!" <<endl;
}
else if (num1 == 1 && num2 == 3 || num1 == 2 && num2 == 1 || num1 == 3 && num2 == 2)
{
cout <<"Player 1 wins !!" <<endl;
}
return 0;
}