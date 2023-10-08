#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
float distance, angleOfElevation;
cout << "Enter the distance from the base of the tree (in feet): ";
cin >> distance;
cout << "Enter the angle of elevation (in degrees): ";
cin >> angleOfElevation;
float radian = angleOfElevation/57.2958;
angleOfElevation = tan(radian);
cout << "The height of the tree is: "<<(angleOfElevation*distance)<< " feet";
return 0;
}

