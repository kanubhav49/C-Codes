#include <iostream>
using namespace std;

bool linearsearch(int arr[],int size,int index,int key)
{
    if(index>size)
    {
        return false;
    }
    else if(arr[index]==key)
    {
        return true;
    }

    linearsearch(arr,size,index+1,key);
}

int main()
{
  int arr[5]={2,4,5,6,7};
  int key;
  cout<<"Enter the key u want to find : ";
  cin >> key;
  if(linearsearch(arr,5,0,key))
  {
    cout<<"Key found";
  }
  else
  {
    cout<<"Key not found";
  }

}