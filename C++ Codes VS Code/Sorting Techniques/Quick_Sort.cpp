#include <iostream>

using namespace std;

int partition(int A[],int s,int e)
{
    int pivot=A[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(A[i]<=pivot)
        {
            cnt++;
        }
    }

    int pivotIndex=s+cnt;

    swap(A[pivotIndex],A[s]);

    //left and right waale part ko sambbhalo

    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(A[i]<pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(A[i++],A[j--]);
        }
    }
    return pivotIndex;

}

void quicksort(int A[],int s,int e)
{
    //base case
    if(s>=e)
    {
        return;

    }
    int p=partition(A,s,e);

    //left waala part sort krenge

    quicksort(A,s,p-1);

    //right waala part sort krenge 

    quicksort(A,p+1,e);

}

int main()
{
    int A[5]={12,5,7,4,9};
    quicksort(A,0,4);
    for (int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;

    }
}