Problem Linl :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3419/

/* Solution */

class Solution {
public:
    int titleToNumber(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++)
            ans=ans*26+(s[i]-'A'+1);
        return ans;
    }
};