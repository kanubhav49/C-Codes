#include <iostream>
#include <vector>
#include <queue>
using namespace std;

 class heap{
    public:
    int arr[250];
    int size=0;

    //constructor called
    heap()
    {
        
    }

    //Insertion in heap
    void insertintoheap(int val)
    {
        size=size+1;
        int index=size;

        //insert value
        arr[index]=val;

        //now find the correct position
        while(index>1)
        {
            int parentindex=index/2;
            if(arr[parentindex]<arr[index])
            {
                swap(arr[parentindex],arr[index]);
                index=parentindex;
            }
            else{
                break;
            }
        }
        return;
    }

    //deletion in heap
    void deletefromheap()
    {
        if(size==0)
        {
            cout<<"heap is already empty"<<endl;
            return;
        }

        //step-1
        swap(arr[1],arr[size]);

        //step-2
        size--;

        //step-3 correct position of arr[1]
        int index=1;
        
        while(index<=size)
        {
            int largest=index;
            int left=2*index;
            int right=2*index+1;

            if(left<=size&&arr[left]>arr[largest])
            {
                largest=left;
            }
            if(right<=size&&arr[right]>arr[largest])
            {
                largest=right;
            }
            if(largest!=index)
            {
                swap(arr[index],arr[largest]);
                index=largest;
            }
            else
            {
                //agr largest change nhi hua , iska mtlb correct pos pr h
                break;
            }

        }

    }

   

void print()
    {
       for(int i=1;i<=size;i++)
       {
        cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
 };

  void heapify(int arr[],int n,int i)
    {
        int left=2*i;
        int right=2*i+1;
        int largest=i;
        
            if(left<=n&&arr[left]>arr[largest])
            {
                largest=left;
            }
            if(right<=n&&arr[right]>arr[largest])
            {
                largest=right;
            }
            if(largest!=i)
            {
                swap(arr[i],arr[largest]);
                i=largest;
                heapify(arr,n,largest);
            }
        
    }

int main()
{
    // heap maxheap;
    // maxheap.insertintoheap(2);
    //  maxheap.insertintoheap(6);
    //   maxheap.insertintoheap(8);
    //    maxheap.insertintoheap(3);
    //     maxheap.insertintoheap(7);

    // maxheap.print();
    // cout<<endl;

    // maxheap.deletefromheap();

    // maxheap.print();

    int arr[6]={-1,2,6,8,3,7};

    int n=5;
    for (int i=n/2;i>=1;i--)
    {
        heapify(arr,n,i);
    }

    cout<<"Printing after building heap"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}