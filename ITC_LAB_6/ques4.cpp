#include<iostream>
using namespace std;

int main()
{
int p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y;
int dg1,dg2;
int s1,s2,s3,s4;

cout <<"Enter points:"<<endl;
cout << "P1:";
cin >> p1x >> p1y;
cout << "P2:";
cin >> p2x >> p2y;
cout << "P3:";
cin >> p3x >> p3y;
cout << "P4:";
cin >> p4x >> p4y;
s1 = ((p2x - p1x)*(p2x - p1x)) + ((p2y - p1y)*(p2y - p1y));
s2 = ((p3x - p2x)*(p3x - p2x)) + ((p3y - p2y)*(p3y - p2y));
s3 = ((p3x - p4x)*(p3x - p4x)) + ((p3y - p4y)*(p3y - p4y));
s4 = ((p4x - p1x)*(p4x - p1x)) + ((p4y - p1y)*(p4y - p1y));
dg1 = ((p3x - p1x)*(p3x - p1x)) + ((p3y - p1y)*(p3y - p1y));
dg2 = ((p4x - p2x)*(p4x - p2x)) + ((p4y - p2y)*(p4y - p2y));

if (s1 == s2 == s3 == s4 && dg1 == dg2)
{
cout << "Its a Square" << endl;
}
else if (s1 == s3 && s2 == s4 && dg1 == dg2)
{
cout << "Its a Rectangle" <<endl;
}
else
cout << "Its a Quardrilateral" <<endl;

return 0;
}