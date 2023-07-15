#include <iostream>
#include <vector>
using namespace std;

void SubsetSumK(int index,vector<int> &ds,int sum,int s,int arr[],int n)
{
    //base condition
    if(index==n)
    {
      
      if(s==sum)
      {
        for(auto it:ds)
        {
            cout<<it<<" ";
            
        }
        cout<<endl;
      }
      return;
    }

    //take and add condition

    ds.push_back(arr[index]);
    s+=arr[index];
    SubsetSumK(index+1,ds,sum,s,arr,n);
    ds.pop_back();
    s-=arr[index];

    //not take condition
    SubsetSumK(index+1,ds,sum,s,arr,n);

}

int main()
{
    int arr[3]={1,2,1};
    vector<int> ds;
    SubsetSumK(0,ds,2,0,arr,3);
}