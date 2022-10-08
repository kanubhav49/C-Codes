#include <iostream>
#include <limits.h>
using namespace std;



int maxinarrayusingrec(int A[],int n,int index)
{
    
    //base condition
    if(index==n)
    {
        return INT_MIN;
    }
    int ans = A[index];
    int recAns = maxinarrayusingrec(A,n,index+1);
    return max(ans,recAns);
}

int main()
{
    int A[5]={1,7,21,18,5};
    int ans=maxinarrayusingrec(A,5,0);

    cout<<"Answer is : "<<ans;

}