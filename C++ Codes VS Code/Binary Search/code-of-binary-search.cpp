#include <iostream>
using namespace std;

int binarysearch(int A[],int key,int size)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end)
    {
        if(A[mid]==key)
        {
            return mid;
        }
        else if(A[mid]<key)
        {
          start=mid+1;
        }
        else if(A[mid]>key)
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
 return -1; 
}

int main()
{
    int A[5]={5,7,8,9,10};
    int a;
    cout<<"Enter the key you want to find : ";
    cin >> a;

    int ans=binarysearch(A,a,5);
    
    if(ans>0)
    {
       cout<<"Key found at index : " <<ans;
    }
    else
    {
        cout<< "key not found ";
    }
}