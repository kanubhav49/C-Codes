#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void kthSmallestNumber(int arr[],int size,int k,int x)
{
    priority_queue<pair<int,int>> maxh;
    for (int i=0;i<size;i++)
    {
        maxh.push({abs(arr[i]-x),arr[i]});
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    while(maxh.size()>0)
    {
        cout<< maxh.top().second<<endl;
        maxh.pop();
    }
    
}

int main()
{
    int arr[5]={11,21,3,7,49};
    int k=3;
    int x=7;
    kthSmallestNumber(arr,5,3,7);
    
}