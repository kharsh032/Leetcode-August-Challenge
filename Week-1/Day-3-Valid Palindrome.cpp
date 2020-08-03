Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3411/

/* Solution */

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) 
        {
            if (!(islower(s[i]) || isupper(s[i]) || isdigit(s[i])))
                i++;
            else if (!(islower(s[j]) || isupper(s[j]) || isdigit(s[j])))
                j--;
            else 
            {
                if (tolower(s[i]) != tolower(s[j]))
                    return false;
                i++;
                j--;
            }
        }
        return true;
    }
};