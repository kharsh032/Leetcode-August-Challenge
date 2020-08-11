Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3420/

/* Solution */

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        vector<int> count(n+1,0);
        for(auto i:citations)
        {
            if(i>=n)
                count[n]++;
            else
                count[i]++;
        }
        int j,ans=0;
        for(j=n;j>=1;j--)
        {
            ans+=count[j];
            if(ans>=j)
                return j;
        }
        return j;
    }
};