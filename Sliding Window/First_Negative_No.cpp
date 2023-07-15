#include <iostream>
#include <queue>
#include <vector>
using namespace std;


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
        queue<long long int> q;
        vector<long long int> v;
        long long int i=0,j=0;
        while(j<N){
            if(A[j]<0){
                q.push(A[j]);
            }
            if(j-i+1 == K){
                if(q.empty()){
                    v.push_back(0);
                }else{
                    v.push_back(q.front());
                    if(A[i]== q.front()){
                        q.pop();
                    }
                }
                i++;
            }
            j++;
        }
        return v;                                 
 }

int main()
{
    long long int A[]={-8, 2, 3, -6, 10};
    long long int N =5;
    long long int k=2;
    vector<long long>v = printFirstNegativeInteger(A,N,k);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
}