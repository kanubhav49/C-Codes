#include<iostream>
#include <vector>
using namespace std;

char flip(char ch)
{
    if(ch==0)
    {
        return '1';
    }
    else{
        return '0';
    }
}

int getFlips(string str,char ch)
{
    int cntflips=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=ch)
        {
            cntflips++;
        }
        ch = flip(ch);
    }
    return cntflips;
}

int main()
{
    string a="01001001101";

    int ans0=getFlips(a,'0');
    int ans1=getFlips(a,'1');
    int ans=min(ans1,ans0);
    cout<<ans<<endl;
}