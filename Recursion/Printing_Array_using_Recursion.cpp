#include <iostream>
using namespace std;

void printArray(int A[],int index,int size)
{
    
   // base case
   if(index==size)
   {
    return;
   }

   cout<<A[index]<<endl;
   return printArray(A,index+1,size);
   
}

int main()
{
    int A[5]={1,5,7,8,9};
    printArray(A,0,5);
}