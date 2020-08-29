Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/553/week-5-august-29th-august-31st/3441/

/* Solution */

class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> ans;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            int mx=INT_MIN,mx_index;
            for(int j=0;j<n-i;j++)
            {
                if(A[j]>mx)
                {
                    mx=A[j];
                    mx_index=j;
                }
            }
            ans.push_back(mx_index+1);
            ans.push_back(n-i);
            reverse(A.begin(),A.begin()+mx_index+1);
            reverse(A.begin(),A.begin()+(n-i));
        }
        return ans;
    }
};