#include <iostream>
using namespace std;

int factorial(int n)
{
  //Base Case
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
      return n*factorial(n-1);
    }
    
}



int main()
{
     int n;
  cout<<"Enter any number: ";
  cin >> n;
  int a=factorial(n);
  cout<<"Factorial of n : "<<a;

}