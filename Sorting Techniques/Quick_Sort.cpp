#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &arr,int low ,int high)
{
   int pivot=arr[low];
   int i=low;
   int j=high;
   while(i<j)
   {
     while(arr[i]<=pivot && i<=high-1)
     {
        i++;
     }
     while(arr[j]>pivot && j>=low+1)
     {
        j--;
     }
     // yeh if ki condition isliye daali h agr i>j ho jaye toh is loop se bahr aa jaye nhi toh wrong elts swap ho jayenge
      if(i<j)
   {
      swap(arr[i],arr[j]);
   }
   }
  swap(arr[low],arr[j]);
   
    return j;
}

void QS(vector<int> &arr,int low ,int high)
{
  if(low<high)
  {
    int parindex = Partition(arr,low,high);
    QS(arr,low,parindex-1);
    QS(arr,parindex+1,high);
  }
}

int main()
{
   vector<int> arr={4,6,2,5,8,7,9,1,3};
   QS(arr,0,8);
   for(auto it:arr)
   {
    cout<<it<<" ";
   }

}