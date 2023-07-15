#include <iostream>
#include <vector>
using namespace std;

//REMEMBER THIS PATTERN FOREVER

int SubsetSumK(int index,int sum,int s,int arr[],int n)
{
    //base condition
    if(index==n)
    {
      
      if(s==sum)
      {
        return 1;
      }
      return 0;
    }

    //take and add condition
    s+=arr[index];
    int l = SubsetSumK(index+1,sum,s,arr,n);
    s-=arr[index];

    //not take condition
    int r = SubsetSumK(index+1,sum,s,arr,n);

    return l+r;

}

int main()
{
    int arr[3]={1,2,1};
  
    int ans = SubsetSumK(0,2,0,arr,3);
    cout<<ans<<endl;
}