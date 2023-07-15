#include <iostream>
using namespace std;

bool binarysearch(int arr[],int size,int mid,int s,int e,int key)
{
    
    //base condition 
    if(s>e)
    {
        return false;
    }

    else if(arr[mid]==key)
    {
        return true;
    }

    else if(arr[mid]>key)
    {
        e=mid-1;
        mid=(s+e)/2;
        return binarysearch(arr,5,mid,s,e,key);
    }
    else if(arr[mid]<key)
    { 
        s=mid+1;
        mid=(s+e)/2;
        return binarysearch(arr,5,mid,s,e,key);

    }

}

int main()
{
   int arr[5]={2,3,4,5,7};

   int key;
   cout<<"Enter the key u want to find : ";
   cin >> key;
   int s=0;
   int e=4;
   int mid=(s+e)/2;

   if(binarysearch(arr,5,mid,0,4,key))
   {
    cout<<"key found";
   }

   else{
    cout<<"key not found";
   }
}