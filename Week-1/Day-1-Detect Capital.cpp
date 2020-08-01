Problem Link :- https://leetcode.com/explore/featured/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3409/

/* Solution */

class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital=0;
        if(word.empty())
            return true;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
               capital++;
        }
       /// cout<<
        if(capital==0||capital==word.size()||(isupper(word[0])&&capital==1))
            return true;
        return false;
    }
};