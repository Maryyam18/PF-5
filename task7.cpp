#include<iostream>
#include<cmath>
using namespace std;
void IsSymmetrical(int number1);

int main()
{
int number1;
cout << "Enter a three-digit number: ";
cin >> number1;
IsSymmetrical(number1);

}
void IsSymmetrical(int number1)
{
int number2;
int number3;
number2 = number1/10;
number3 = number2/10;
if(number1 % 10 == number3)
{
cout << "The number is symmetrical.";
}

if((number1 % 10)!= number3)
{
cout << "The number is not symmetrical.";
}
}
