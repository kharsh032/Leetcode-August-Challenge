Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/3436/

/* Solution */

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        unordered_set<int> s(begin(days),end(days));
        vector<int> dp(days.back()+1);
        dp[0]=0;
        for(int i=1;i<=days.back();i++)
        {
            if(s.find(i)==s.end())
                dp[i]=dp[i-1];
            else
                dp[i]=min({costs[0]+dp[i-1],dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]});
            // for(int j=1;j<=days.back();j++)
            //     cout<<dp[i]<<"   ";
            // cout<<"\n";
        }
        return dp[days.back()];
    }
};