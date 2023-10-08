#include<iostream>
#include<cmath>
using namespace std;

main()
{
float a, b, c;
cout << "Enter the value of a: ";
cin >> a;
cout << "Enter the value of b: ";
cin >> b;
cout << "Enter the value of c: ";
cin >> c;

float Determinant = b*b - 4*a*c;
if(Determinant > 0)
{
float squareRoot;
squareRoot = b*b - 4*a*c;
sqrt(squareRoot);
float root1;
root1 = (-b+sqrt(squareRoot))/(2*a);
float root2;
root2 = (-b-sqrt(squareRoot))/(2*a);
cout << "Solutions: x = "<<root1 << " and x = "<< root2;
}

if(Determinant == 0)
{
float root1;
root1 = -b/(2*a);
cout << "Solution: x = "<<root1 <<endl;
}

if(Determinant < 0)
{
float squareRoot;
squareRoot = b*b - 4*a*c;
float part1;
part1 = (sqrt(-squareRoot)/(2*a));
float part2;
part2 = -b/(2*a);
cout << "Complex Solutions: x = "<<part2 << " + "<<part1 << "i and x = "<<part2 << " - " <<part1 <<"i";
}
}

 


 