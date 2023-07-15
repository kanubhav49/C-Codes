#include <iostream>
using namespace std;

int DeletingElt(int arr[],int index,int size)
{
 if(index<=(size-1))
  {
    for (int i=index;i<size;i++)
   {
       arr[i]=arr[i+1];
   }

   return size-1;
  }
  else
  {
    return -1;
  }
  
}

void DisplayArray(int Arr[],int size)
{
  for (int i=0;i<size;i++)
  {
    cout<<Arr[i]<<endl;
  }
}


int main()
{
   int A[5]={2,4,5,7,8};
   int size=5;
   int newsize = DeletingElt(A,3,size);

   DisplayArray(A,newsize);
}