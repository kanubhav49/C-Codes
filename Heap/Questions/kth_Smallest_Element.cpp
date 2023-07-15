#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallestNumber(int arr[],int size,int k)
{
    priority_queue<int> maxh;
    for (int i=0;i<size;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    return maxh.top();
}

int main()
{
    int arr[5]={11,21,3,7,49};
    int k=3;
    int ans=kthSmallestNumber(arr,5,3);
    cout<<ans<<endl;
}