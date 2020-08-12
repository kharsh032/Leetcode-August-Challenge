Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3421/

/* Solution */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1,0);
        ans[0]=1;
        for(int i=1;i<=rowIndex;i++)
        {
            for(int j=i;j>=1;j--)
                ans[j]+=ans[j-1];
            for(auto ii:ans)
                cout<<ii<<"  ";
            cout<<"\n";
      }
        return ans;
    }
};