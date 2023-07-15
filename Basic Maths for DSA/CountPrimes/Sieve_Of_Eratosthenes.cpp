#include <iostream>
#include <vector>
using namespace std;

//Brute force approach will take more time and lead to TLE
//Better Approach Sieve of Eratosthenes
int CountPrimes(int n)
{
    //1 Mark every no prime
    vector<bool> prime(n+1,true);
    int cnt=0;

    //2 Mark 0,1 as non prime
    prime[0]=prime[1]=false;

    //3 Table wise sbme non prime mark krdo
    for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                cnt++;
            }
            for(int j=2*i;j<n;j=j+i)
            {
                prime[j]=0;
            }
        }
        return cnt;
}
int main()
{
    int n=10;
    int ans=CountPrimes(n);
    cout<<ans<<endl;
}