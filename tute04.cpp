/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);
using namespace std;
int main() 
{
  int n, r, i;
  cout << "Enter a value for n ";
  cin >> n;
  cout << "Enter a value for r ";
  cin >> r;
  cout << "nCr = ";
  nCr(n, r);
  cout << nCr(n,r);
  cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int Factorial = 1;
  for(int r=no; r >=1; r--)
  {
    Factorial = Factorial * r;
  }
  return Factorial;

}
long nCr(int n, int r)
{
  return Factorial(n) / (Factorial(r) * Factorial(n-r));

}
