#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void KlargestElement(int arr[],int k,int size)
{
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=0;i<size;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
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
    int arr[5]={12,77,32,1,49};
    KlargestElement(arr,2,5);
    
}