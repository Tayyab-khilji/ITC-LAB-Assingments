#include<iostream>
using namespace std;

int main()
{
int a, b , c;
cout <<"Enter First Number:";
cin >> a;
cout <<"Enter Second Number:";
cin >> b;
cout <<"Enter Third Number:";
cin >> c;
if (a > b && a < c || a > c && a < b)
{
cout << "The Second Highest Number is = "<< a <<endl;
}
else if (b > a && b < c || b > c && b < a)
{
cout <<"The Second Highest Number is = "<<b <<endl;
}
else if (c > b && c < a || c > a && c < b)
{
cout <<"The Second Highest Number is = "<< a <<endl;
}
return 0;
}