#include <iostream>
using namespace std;

int staircaseproblem(int nstairs)
{
   if(nstairs<0)
   {
    return 0;
   }

   if(nstairs==0)
   {
    return 1;
   }

   return staircaseproblem(nstairs-1)+staircaseproblem(nstairs-2);
}

int main()
{
    int n;
    cout<<"Enter the no. of stairs : ";
    cin >> n;
    int ans=staircaseproblem(n);
    cout<<"Answer is : "<<ans;

}