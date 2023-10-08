#include<iostream>
#include<cmath>
using namespace std;
 
void OddishOrEvenish(int number);
main()
{
int number;
cout << "Enter a five-digit number: ";
cin >> number;
OddishOrEvenish(number);
}
void OddishOrEvenish(int number)
{
int number1, number2, number3, number4, number5, number6, number7, number8;
int sum;
number1 = number%10;
number2 = number/10;
number3 = number2%10;
number4 = number2/10;
number5 = number4%10;
number6 = number4/10;
number7 = number6%10;
number8 = number6/10;
sum = number1+number3+number5+number7+number8;
if(sum%2== 0)
{
cout << "Evenish";
}

if(sum%2== 1)
{
cout << "Oddish";
}
}



