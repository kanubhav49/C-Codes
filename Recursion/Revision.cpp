#include <iostream>
#include <vector>
using namespace std;

//PRINTING NAME N TIMES

// void PrintName(int n)
// {
//   if(n==0)
//   return;
//   else{
//     cout<<"Anubhav"<<endl;
//     n--;
//     PrintName(n);
//   }
// }

//PRINT 1 TO N USING BACKTRACKING

// void Print1toNusingBacktrack(int n)
// {
//   //base condition
//   if(n<1)
//   {
//     return;
//   }
//   else
//   {
//     Print1toNusingBacktrack(n-1);
//     cout<<n<<endl;

//   }
// }  

//PRINT 1 TO N USING BACKTRACKING

// void PrintNto1usingBacktrack(int i,int n)
// {
//   //base condition
//   if(i>n)
//   {
//     return;
//   }
//   else
//   {
//     PrintNto1usingBacktrack(i+1,n);
//     cout<<i<<endl;

//   }
// }

// int SumNnos(int n)
// {
//   if(n==0)
//   {
//     return 0;
//   }
//   else{
//    return n + SumNnos(n-1);
//   }

// }

// int Factorial(int n)
// {
    
//   if(n==0)
//   {
//     return 1;
//   }
//   else{
//    return n * Factorial(n-1);
//   }

// }

//REVERSE AN ARRAY

// void ReverseAnArray(int A[],int n,int i)
// {
//  //base condition
//  if(i>=n/2)
//  {
//     return;
//  }
//  else
//  {
//     swap(A[i],A[n-i-1]);
//     ReverseAnArray(A,n,i+1);
//  }
// }

//CHECKING PALINDROME STRING

// bool CheckPalindromeString(string s,int i,int n)
// {
//   //base condition
//   if(i>=n/2)
//   {
//     return true;
//   }
//   else
//   {
//     if(s[i]!=s[n-i-1])
//     {
//         return false;
//     }
//   }
//   return CheckPalindromeString(s,i+1,n);

// }

//MERGE SORT

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<int> &arr, int low, int high) {
//     if (low >= high) return;
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }


int main()
{ 
    //PRINTING NAME N TIMES

    // int n;
    // cout<<"Enter the number of times you want to print name : ";
    // cin >> n;
    // PrintName(n);

    //PRINT 1 TO N USING BACKTRACKING

    // int n;
    // cout<<"Enter the number : ";
    // cin >> n;
    // Print1toNusingBacktrack(n);

    //PRINT N TO 1 USING BACKTRACKING

    // int n;
    // cout<<"Enter the number : ";
    // cin >> n;
    // PrintNto1usingBacktrack(1,n);
  
    //SUM OF NUMBERS
    
    // int n;
    // cout<<"Enter the number : ";
    // cin >> n;
    // int ans = SumNnos(n);
    // cout<<ans<<endl;

    //FACTORIAL OF N

    // int n;
    // cout<<"Enter the number : ";
    // cin >> n;
    // int ans = Factorial(n);
    // cout<<ans<<endl;

   //REVERSE AN ARRAY

//    int A[5]={14,35,42,77,49};
//    ReverseAnArray(A,5,0);

//   for(int i=0;i<5;i++)
//   {
//     cout<<A[i]<<endl;
//   }

    //CHECK PALINDROME STRING

    // string s1="RACECARI";
    // string s2="ANUNA";

    // int ans1=CheckPalindromeString(s1,0,s1.length());
    // int ans2=CheckPalindromeString(s2,0,s2.length());

    // cout<<ans1<<endl;
    // cout<<ans2<<endl;

    // MERGE SORT
    
    //     vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    // int n = 7;

    // cout << "Before Sorting Array: " << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " "  ;
    // }
    // cout << endl;
    // mergeSort(arr, 0, n - 1);
    // cout << "After Sorting Array: " << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " "  ;
    // }
    // cout << endl;
    // return 0 ;

}