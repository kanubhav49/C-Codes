#include <iostream>
using namespace std;

void prtincdec(int n,int y)
{
    int z=y;
   //Base Case
   if(n<=0)
   {
    return;
   }

   cout<<y+1-n<<" ";
   prtincdec(n-1,z);
   cout<<y+1-n<<" ";
}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin >> n;
    int y=n;

    prtincdec(n,y);
}