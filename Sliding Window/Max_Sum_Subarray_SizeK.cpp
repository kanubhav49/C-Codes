#include <iostream>
#include <queue>
#include <vector>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long mx=0;
        long sum=0;
        int i=0;
        int j=0;
        
        while(j<N)
        {
            sum=sum+Arr[j];
            if(j-i+1<K)
            {
                j++;
            }
            else if(j-i+1==K)
            {
                mx=max(mx,sum);
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
        return mx;
    }

    int main()
    {
        cout<<"Sliding Window approach"<<endl;
    }