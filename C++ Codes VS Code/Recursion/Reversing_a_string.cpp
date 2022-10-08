#include <iostream>
using namespace std;

void reverse(int i,int j,string& s)
{  
    if(i>j)
    {
        return;
    }
    
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(i,j,s);
    
}

int main()
{
   string name="Anubhav";
   reverse(0,(name.length()-1),name);
   cout<<"Reversed name is : "<<name;
}