#include<iostream>
using namespace std;

main()
{
char spelling;
cout << "Enter a character (A/a): ";
cin >> spelling;

if(spelling == 'A')
{
cout << "You have entered Capital "<<spelling;
}

if(spelling == 'a')
{
cout << "You have entered small "<<spelling;
}
}

