#include <iostream>
#include <vector>
#include <queue>
using namespace std;

 void kClosest(vector<vector<int>>& points, int k) 
    {
       vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>> maxh;

        for(int i=0;i<points.size();i++)
        {
            maxh.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
             if(maxh.size()>k)
             {
                 maxh.pop();
             }
        }
        while(maxh.size()>0)
        { 
            auto it=maxh.top().second;
            maxh.pop();
            vector<int> temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            ans.push_back(temp);
        }
        for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }    
        cout << endl;
    }
     
    }

    int main()
    {
        vector<vector<int>> points;
        points = {{3,3},{5,-1},{-2,4}};
        kClosest(points,2);
    }