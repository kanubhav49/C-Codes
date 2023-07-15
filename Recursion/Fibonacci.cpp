#include <iostream>
using namespace std;

int getfib(int n)
{
    //Base Case
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;

    }
   
   return getfib(n-1)+getfib(n-2);
   
}

int main()
{
    int n=5;
    int ans=getfib(n);

    cout<<"Ans is : "<<ans<<endl;
}
