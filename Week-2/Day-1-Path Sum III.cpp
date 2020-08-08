Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3417/

//Solution

class Solution {
public:
    int count=0;
    unordered_map<int,int> pre_sum;
     void dfs(TreeNode* root, int sum,int temp_sum)
    {
        if(root==NULL)
            return;
        temp_sum+=root->val;
        if(pre_sum.find(temp_sum-sum)!=pre_sum.end())
             count+=pre_sum[temp_sum-sum];
        pre_sum[temp_sum]++;
        dfs(root->left,sum,temp_sum);
        dfs(root->right,sum,temp_sum);
        pre_sum[temp_sum]--;
    }
    int pathSum(TreeNode* root, int sum) 
     {
        pre_sum[0]=1;
        dfs(root,sum,0);
        return count;
    }
};