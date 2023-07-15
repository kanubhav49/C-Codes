#include<iostream>
#include <vector>
using namespace std;

void  Reverse(vector<char> &s,int i,int n)
    {
     //base condition
     if(i>=n/2)
     {
         return;
     }
     else
     {
         swap(s[i],s[n-i-1]);
         Reverse(s,i+1,n);
     }
    }

    void reverseString(vector<char>& s) 
    {
        int n = s.size();
        Reverse(s,0,n);
    }

int main()
{
    vector<char> s={'A','n','u','b','h','a','v'};
    reverseString(s);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
}