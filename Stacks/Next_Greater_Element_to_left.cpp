#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 3, 0, 0, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;
    stack<int> st;
    st.push(arr[n - 1]);
    vector<int> v;
    v.push_back(-1);
    for (int i = n - 2; i >= 0; i--)
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
    reverse(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u << ' ';
    }
    cout << endl;
}