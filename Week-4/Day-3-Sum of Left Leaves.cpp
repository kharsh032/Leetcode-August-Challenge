Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/3435/

/* Solution */

class Solution {
public:
    void left_sum(TreeNode* root,int* sum,bool flag=0)
    {
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL&&flag==1)
            *sum+=root->val;
        left_sum(root->left,sum,1);
        left_sum(root->right,sum,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        int sum=0;
        left_sum(root,&sum);
        return sum;
    }
};