#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

 int gcd(int a,int b)
    {
        if(a==0)
        {
            return b;
        }
        if(b==0)
        {
            return a;
        }
        while(a!=b)
        {
          if(a>b)
          {
             a=a-b; 
          }
            else
            {
                b=b-a;
            }
        }
        return a;
    }
    int findGCD(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans = gcd(nums[0],nums[n-1]);
        return ans;  
    }

int main()
{
    vector<int> nums={2,5,6,9,10};
    int ans=findGCD(nums);
    cout<<ans<<endl;
}