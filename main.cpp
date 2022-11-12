// write your code here
// Brian Koringo #j00962107  11/04/2022\
//Quadratic formula
//This program calculates accepts the input of coefficients of the quadratic equation, calculates the discriminant and outputs the type of roots the equation has also outputs the roots of the equation if the discriminant is >=0
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
double a, b, c, discriminant, root1, root2;
  cin >> a;
  if (a==0)
  {
    cout << "\n" << "Invalid Entry!";
  }
  else
  {
cin >> b;  
cin >> c;
  
discriminant= (pow(b,2)-(4*a*c)); //calculates the discriminant
root1=(-b+discriminant)/(2*a);
root2=(-b-discriminant)/(2*a);   //finds the roots  of the equation
}
  if (discriminant > 0)
  {
    cout << "Two real roots" << endl;
    cout << "- First root " << root1 << endl;
    cout << "- Second root " << root2 << endl;
    cout << endl;
  }
  else if (discriminant < 0)
  {
    cout << "Complex roots";
    cout << endl;
  }
  else
  {
    cout << "The single root is " << root1;
    cout << endl;
  }
  return 0;
}
