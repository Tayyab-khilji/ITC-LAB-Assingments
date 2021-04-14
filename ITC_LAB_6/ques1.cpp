#include<iostream>
using namespace std;

int main()
{
float input;
int ceil;
cout <<"Enter any floating value :";
cin>>input;
ceil = input;
if (input>0 && (input!=ceil))
{
ceil++;
}
cout << "ceil value is " << ceil << endl;

return 0;
}