#include <iostream>
using namespace std;

void saydigits(int n,string arr[])
{
   //base condition
   if(n==0)
   {
    return ;
   }
 
   // processing part

   int digit=n%10;
   n=n/10;

   //recursive relation
   saydigits(n,arr);

   cout<<arr[digit]<<" ";

}

int main()
{
   string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   int n;
   cout<<"Enter any number :";
   cin >> n;
   saydigits(n,arr);


}