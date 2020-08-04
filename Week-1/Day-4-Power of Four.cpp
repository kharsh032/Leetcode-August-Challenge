Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3412/

/* Solution */

class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0&&((num&(num-1))==0)&&(num-1)%3==0;
    }
};