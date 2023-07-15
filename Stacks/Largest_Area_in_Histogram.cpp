
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmaller(vector<int> arr) {
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


vector<int> prevSmaller(vector<int> arr) {
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


int largestArea(vector<int> arr) {
    
    vector<int> prev = prevSmaller(arr);
    vector<int> next = nextSmaller(arr);

    int maxArea = -2147483648l;//INT_MIN;

    for(int i=0; i<arr.size(); i++) {
        int length = arr[i];
        int breadth = next[i] - prev[i] - 1;
        int newArea = length * breadth;
        maxArea = max(maxArea, newArea);
    }
    return maxArea;
}

    int largestRectangleArea(vector<int>& heights) 
    {
        return largestArea(heights);
    }

int main()
{
    vector<int> heights={6,2,5,4,5,1,6};
    int ans = largestRectangleArea(heights);
    cout<<"Answer is : "<<ans<<endl;
}