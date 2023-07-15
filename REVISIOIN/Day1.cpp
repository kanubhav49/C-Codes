#include <iostream>
#include <vector>
using namespace std;

//PRINTING SUBSEQUENCES

// void PrintSubs(vector<int> &ds,vector<int> arr,int index)
// {
//     //base condition
//     if(index>=arr.size())
//     {
//        for(auto it:ds)
//        {
//         cout<<it<<" ";
//        }
//        if(ds.size()==0)
//     {
//         cout<<"{}";
//     }
//         cout<<endl;
//         return;
//     }
//     else
//     {
//         //take
//         ds.push_back(arr[index]);
//         PrintSubs(ds,arr,index+1);
//         ds.pop_back();
        
//         //not take
//         PrintSubs(ds,arr,index+1);
    
//     }
   
// }

//PRINTING ALL SUBSEQUENCES WHOSE SUM IS K

void PrintAllSubsSumisK(vector<int> &ds,vector<int> arr,int index,int S,int k)
{
    //base condition
    if(index>=arr.size())
    {
        if(S==k)
        {
            for(auto it:ds)
            {
             cout<<it<<" ";
            }

            cout<<endl;
            return;
        }

        else
        {
           return;
        }
    }
    else
    {
        //take
        ds.push_back(arr[index]);
        S+=arr[index];
        PrintAllSubsSumisK(ds,arr,index+1,S,k);
        S-=arr[index];
        ds.pop_back();
        
        //not take
        PrintAllSubsSumisK(ds,arr,index+1,S,k);
    
    }
   
}

int main()
{
  vector<int> arr={1,2,1};
  vector<int> ds;

//   PRINTING ALL SUBSEQUENCES
//   PrintSubs(ds,arr,0);

// PRINTING ALL SUBSEQUENCES WHOSE SUM IS K
   PrintAllSubsSumisK(ds,arr,0,0,2);

}