#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

void topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            minh.push({i->second,i->first});
            if(minh.size()>k)
            {
                minh.pop();
            }
        }
        while(minh.size()>0)
        {
            ans.push_back(minh.top().second);
            minh.pop();
        }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    }

int main()
{
    vector<int> nums={1,1,1,2,2,3,5,7};
    topKFrequent(nums,2);
}
