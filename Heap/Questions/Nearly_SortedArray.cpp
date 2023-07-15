#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void NearlySortedArray(int arr[],int k,int size)
{
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=0;i<size;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {   
            cout<<minh.top()<<endl;
            minh.pop();
        }
    }
    while(minh.size()>0)
    {
        cout<<minh.top()<<endl;
        minh.pop();
    }
}

int main()
{
    int arr[7]={6 ,5, 3, 2, 8, 10, 9};
    NearlySortedArray(arr,3,7);
    
}