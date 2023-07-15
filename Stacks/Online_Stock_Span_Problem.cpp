#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;

void StockSpan(vector<int> &input)
{
    vector<int> ans;
    stack<pair<int,int>> s;
    ans.push_back(-1);
    s.push({input[0],0});

    for(int i=1;i<input.size();i++)
    {
       int element = input[i];

        while (!s.empty())
        {

            if (s.top().first>element)
            {
                ans.push_back(s.top().second);
                s.push({element,i});
                break;
            }
            else
            {
                s.pop();
            }
        }
        if (s.empty() == true)
        {
            ans.push_back(-1);
            s.push({element,i});
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<i-ans[i]<<endl;
    }

}


int main()
{
    vector<int> input={100,80,60,70,60,75,85};
    StockSpan(input);

}