Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3425/

/* Solution */

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty())
            return 0;
        vector<pair<int,int>> interval;
        for(int i=0;i<intervals.size();i++)
            interval.push_back({intervals[i][0],intervals[i][1]});
        sort(interval.begin(),interval.end(),[](pair<int,int>& p,pair<int,int>& p2)
             {
                 if(p.first==p2.first)
                     return p.second<p2.second;
                 return p.second<p2.second;
             });
        int ans,end=interval[0].second;
        for(int i=1;i<interval.size();i++)
        {
            if(interval[i].first>=end)
                end=interval[i].second;
            else
                ans++;
        }
        
        return ans;
    }
};