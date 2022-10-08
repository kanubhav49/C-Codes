#include <iostream>
using namespace std;

void merge(int A[],int l,int mid,int h)
{
   int i=l;
   int j=mid+1;
   int k=l;
   int B[100];
   
   while(i<=mid && j<=h)
   {
    if (A[i]<A[j])
    {
        B[k++]=A[i++];
    }
    else
    {
        B[k++]=A[j++];
    }
   }
   for(;i<=mid;i++)
   {
    B[k++]=A[i];
   }
   for(;j<=h;j++)
   {
    B[k++]=A[j];
   }
   
   for(int i=l;i<=h;i++)
   {
    A[i]=B[i];
   }
}

void mergesort(int A[],int l,int h)
{
   int mid;
    if(l>=h)
    {
        return;
    }
    if(l<h)
    {
      mid =(l+h)/2;
    
    mergesort(A,l,mid);

    mergesort(A,mid+1,h);
    merge(A,l,mid,h);
    }
  
}

int main()
{
    int A[5]={4,1,3,7,9};
    mergesort(A,0,4);
    for (int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }

}
