Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3414/

/* Solution */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int index=(abs(nums[i])-1);
            if(nums[index]<0)
                ans.push_back(abs(nums[i]));
            nums[index]=-nums[index];
        }
        return ans;
    }
};