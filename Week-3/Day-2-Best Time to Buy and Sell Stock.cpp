Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3426/

/*Solution*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
       int buy1=INT_MAX,buy2=INT_MAX,sell1=0,sell2=0;
        for(int i=0;i<prices.size();i++)
        {
            buy1=min(buy1,prices[i]);
            sell1=max(sell1,prices[i]-buy1);
            buy2=min(buy2,prices[i]-sell1);
            sell2=max(sell2,prices[i]-buy2);
           // cout<<buy1<<"   "<<sell1<<"  "<<buy2<<"   "<<sell2<<"\n";
        }
        return sell2;
    }
};