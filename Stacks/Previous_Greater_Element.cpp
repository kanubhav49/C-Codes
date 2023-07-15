#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1,3,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;
    stack<int> st;
    st.push(arr[0]);
    vector<int> v;
    v.push_back(-1);
    for (int i = 1; i <=n-1; i++)
    {
        int element = arr[i];

        while (!st.empty())
        {

            if (st.top() > element)
            {
                v.push_back(st.top());
                st.push(element);
                break;
            }
            else
            {
                st.pop();
            }
        }
        if (st.empty() == true)
        {
            v.push_back(-1);
            st.push(element);
        }
    }
    
    for (auto u : v)
    {
        cout << u << ' ';
    }
    cout << endl;
}