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

void iterative_mergesort(int A[],int n)
{
    int p,i,l,mid,h;
    
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;

            merge(A,l,mid,h);
        }
    
    if(n-i>p/2)
    {
        l = i;
        h = i+p-1;
        mid = (l+h)/2;
        merge(A, l, mid, n-1);
    }
    }
    
    if(p/2<n)
  {
   merge(A,0,p/2-1,n-1);
  }
}

int main()
{
   /* FOR MERGING ONLY (MERGING TWO LISTS FROM A SINGLE ARRAY)
   
   int a[7]={3,5,7,8,9,1,2};
    merge(a,0,4,7);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<endl;
    }
    */
      
    int A[5]={4,1,3,7,9};
    iterative_mergesort(A,5);
    for (int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }

}
