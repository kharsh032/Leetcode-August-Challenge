Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3423/

/* Solution */

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> counter(128,0);
        for(auto ch:s)
            counter[ch]++;
        sort(counter.begin(),counter.end());
        int odd=0;
        int ans=0;
        for(int i=127;i>=0;i--)
        {
            if(counter[i]&1)
            {
                ans+=(counter[i]-1);
                odd++;
            }
            else
                ans+=counter[i];
        }
        return odd>=1?ans+1:ans;
    }
};