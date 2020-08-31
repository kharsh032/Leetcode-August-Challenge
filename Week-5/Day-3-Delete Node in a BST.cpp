Problem Link:-https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/553/week-5-august-29th-august-31st/3443/

/* Solution */


class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return NULL;
        if(root->val>key)
           root->left=deleteNode(root->left,key);
        else if(root->val<key)
           root->right=deleteNode(root->right,key);
        else
        {
            if(root->left==NULL)
                return root->right;
            if(root->right==NULL)
                return root->left;
            TreeNode* rightnode=root->right;
            while(rightnode->left!=NULL)
                 rightnode=rightnode->left;
            //cout<<root->val<<"    cc  "<<rightnode->val<<"     "<<root->right->val<<"\n";
            rightnode->left=root->left;

            return root->right;               
        }
        return root;
    }
};