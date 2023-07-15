#include<iostream>
using namespace std;

int getlength(char arr[])
{
    int length=0;
    int index=0;
    while(arr[index]!='\0')
    {
        length++;
        index++;
    }
    return length;
}

int main()
{
    //creation
    char name[10];
    //input
    cin>>name;
    //output
    // cout<<name;

    int ans = getlength(name);
    cout<<ans<<endl;
}