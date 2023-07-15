#include <iostream>
using namespace std;

int ifsortedarray(int arr[],int n,int index)
{
    //base case

    if(index>n)
    {
        return 1;
    }

   if(arr[index]<arr[index+1])
   {
      return ifsortedarray(arr,n,index+1);
   }

   else if(arr[index]>arr[index+1])
   {
    return -1;
   }


    
}

int main()
{
  int array[5]={1,3,5,7,8};
  cout<<ifsortedarray(array,5,0);

}