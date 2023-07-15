#include <iostream>
#include <stack>
#include <vector>
using namespace std;

  int trap(vector<int>& height) 
    {
        int size=height.size();
        vector<int> mxl(height.size(),-1);
        vector<int> mxr(height.size(),-1);
        
        mxl[0]=height[0];
        mxr[size-1]=height[size-1];
        
        for(int i=1;i<size;i++)
        {
            mxl[i]=max(mxl[i-1],height[i]);
        }
        for(int i=size-2;i>=0;i++)
        {
            mxr[i]=max(mxr[i+1],height[i]);
        }
        vector<int> arr;
        for(int i=0;i<size;i++)
        {
            arr[i]=min(mxl[i],mxr[i])-height[i];
        }
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }

int main()
{
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    int ans=trap(height);
    cout<<"Answer is : "<<ans<<endl;
}
