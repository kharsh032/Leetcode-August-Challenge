Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/3438/

/* Solution */

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int> start_indices;
        int n=intervals.size();
        for(int i=0;i<n;i++)
            start_indices[intervals[i][0]]=i;
          vector<int> ans(n,-1);
          for(int i=0;i<n;i++)
          {
              int find=intervals[i][1];
              auto ind=start_indices.lower_bound(find);
              if(ind!=start_indices.end())
                ans[i]=ind->second;
              
          }
        return ans;
    }
};