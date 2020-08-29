Problem Link :-https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/3439/

/* Solution */

class Solution {
public:
    int rand10() {
        while (true) 
        {
            int n = rand7() + (rand7() - 1) * 7;
            if (n <= 40) {
                return n % 10 + 1;
            }
        }
    }
};