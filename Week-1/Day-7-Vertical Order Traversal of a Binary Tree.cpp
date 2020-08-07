Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3415/

//Solution

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,set<int>>> vertical;
        queue<pair<TreeNode*,pair<int,int>>> nodes;
        nodes.push({root,{0,0}});
        while(!nodes.empty())
        {
            auto a=nodes.front();
            TreeNode* temp=a.first;
            int x=a.second.first;
            int y=a.second.second;
            nodes.pop();
            vertical[x][y].insert(temp->val);
            if(temp->left)
                nodes.push({temp->left,{x-1,y+1}});
            if(temp->right)
                nodes.push({temp->right,{x+1,y+1}});
        }
        vector<vector<int>> ans;
        for(auto i:vertical)
        {
            vector<int> col;
            for(auto p:i.second)
            {
             ///   cout<<p.first<<"     "<<"\n";
                 col.insert(col.end(),p.second.begin(),p.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};