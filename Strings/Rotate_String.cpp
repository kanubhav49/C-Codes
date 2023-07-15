#include<iostream>
#include <vector>
using namespace std;

bool rotateString(string s, string goal) 
    {
        if(s.length()!=goal.length())
        {
            return false;
        }
        string temp=goal+goal;
        if(temp.find(s)==string::npos)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

int main()
{
    string a="bbarba";
    string b="babbar";
    bool ans=rotateString(b,a);
    cout<<ans<<endl;
}