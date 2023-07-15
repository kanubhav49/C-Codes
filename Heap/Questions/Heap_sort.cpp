#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int left=2*i;
    int right=2*i+1;
    int largest=i;
        
    if(left<=n&&arr[left]>arr[largest])
    {
    largest=left;
    }
    if(right<=n&&arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        i=largest;
        heapify(arr,n,largest);
    }
     
}

void heapsort(int arr[],int size)
{
    //build heap 
    int n=size;
    for (int i = n / 2 ; i >= 1; i--)
    heapify(arr, n, i);
    
    while(n!=1)
    {
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }

    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int arr[6]={-1,2,6,8,3,7};
    heapsort(arr,5);
}