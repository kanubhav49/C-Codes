#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;

    vector<int> nextSmaller(vector<int> arr) 
{
    stack<int> s;
    s.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        int item= arr[i];

        while(s.top() != -1 && arr[s.top()] >= item) {
            s.pop();
        }

        //push in ans
        if(s.top() == -1)
            ans[i] = n;
        else 
            ans[i] = s.top();
       
        s.push(i);
    }
    return ans;
}


vector<int> prevSmaller(vector<int> arr) 
{
    stack<int> s;
    s.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        int item= arr[i];

        while(s.top() != -1 && arr[s.top()] >= item) {
            s.pop();
        }

        //push in ans
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}


int largestArea(vector<int> arr) 
{    
    vector<int> prev = prevSmaller(arr);
    vector<int> next = nextSmaller(arr);

    int maxArea = -2147483648l;

    for(int i=0; i<arr.size(); i++) {
        int length = arr[i];
        int breadth = next[i] - prev[i] - 1;
        int newArea = length * breadth;
        maxArea = max(maxArea, newArea);
    }
    return maxArea;
}

    int MAH(vector<int>& v) {
        return largestArea(v);
    }

    int maximalRectangle(vector<vector<int>>& matrix) 
    {
     int maxarea = 0;
     vector<int> v(matrix[0].size(),0);
       for(int i=0;i<matrix.size();i++)
       {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    v[j]=0;
                }
                else
                {
                    v[j]+=1;
                }
           }
           int area=MAH(v);
           maxarea =max(area,maxarea);
       }
    return maxarea;
    }


int main()
{
    vector<vector<int>> matrix={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int ans=maximalRectangle(matrix);
    cout<<"ANSWER : "<<ans<<endl;
}