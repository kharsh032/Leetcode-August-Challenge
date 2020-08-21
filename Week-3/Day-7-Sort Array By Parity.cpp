Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3431/

/* Solution */

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int start=0,end=A.size()-1;
        while(start<end)
        {
            if(A[start]%2==0)
                start++;
            else
                swap(A[start],A[end--]);
        }
        return A;
    }
};