#include<iostream>
#include<cmath>
using namespace std;

string timeTravel(int hours, int minutes);
main()
{
int hours;
int minutes;
cout << "Enter Hours: ";
cin >> hours;
cout << "Enter Minutes: ";
cin >> minutes;
string result;
result = timeTravel(hours, minutes);
cout << result;
}
string timeTravel(int hours, int minutes)
{
minutes = minutes+15;
if(minutes >= 61)
{
hours = hours+1;
minutes = minutes-60;

if(hours >= 24)
{
hours = 0;
}

}
return to_string(hours) + ":" + to_string(minutes);
}



 


