#include <iostream>
using namespace std;

void RevprintArray(int A[],int n)
{
    
   // base case
   if(n==0)
   {
    return;
   }

   cout<<A[n-1]<<endl;
   return RevprintArray(A,n-1);
   
   
}

int main()
{
    int A[5]={1,5,7,8,9};
    RevprintArray(A,5);
}