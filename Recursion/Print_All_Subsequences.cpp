#include <iostream>
#include <vector>
using namespace std;

//ds mei subsequences   daalenge , arr mei se lenge values 
void PrintSubsequences(vector<int> &ds,int arr[],int n,int index)
{
  // base condition
  if(index>=n)
  {
    for(auto it:ds)
    {
        cout<<it<<" ";
    }
    if(ds.size()==0)
    {
        cout<<"{}";
    }

        cout<<endl;
        return;
  }

   //take condition
   ds.push_back(arr[index]);
   PrintSubsequences(ds,arr,n,index+1);
   ds.pop_back();

   //not take condition
   PrintSubsequences(ds,arr,n,index+1);
}

int main()
{
    int arr[3]={3,1,2};
    int n=3;
    vector<int> ds;
    PrintSubsequences(ds,arr,3,0);
}