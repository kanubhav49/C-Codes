#include <iostream>
using namespace std;

int prtdec(int n)
{
    //Base Case
    if(n<=0)
    {
        return 0;
    }
    
    cout<<n<<endl;

    prtdec(n-1);

}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin >> n;

    int ans = prtdec(n);

    cout<<ans<<endl;

}