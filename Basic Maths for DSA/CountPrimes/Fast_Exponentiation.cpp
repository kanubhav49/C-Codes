#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int powerof(int a,int b)
{
    int ans=1;
    //if odd just multiply ans by a
    while(b>0)
    {
        if(b&1)
        {
            ans=ans*a;
            
        }
        a=a*a;
        b=b/2;     
    }
    return ans;
}

int main()
{
    int ans=powerof(2,5);
    cout<<ans<<endl;
}