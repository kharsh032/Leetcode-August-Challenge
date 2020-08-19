Problem Link:- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3428/

/* SOlution */

class Solution {
public:
   
    vector<int> numsSameConsecDiff(int N, int K) {
      vector<int> num={0,1,2,3,4,5,6,7,8,9};
      for(int i=2;i<=N;i++)
      {
          vector<int> ans;
          for(int x:num)
          {
              int mod=x%10;
              if(x>0&&mod+K<=9)
                  ans.push_back(x*10+mod+K);
              if(x>0&&K>0&&mod-K>=0)
                  ans.push_back(x*10+mod-K);
          }
          num=ans;
      }
        return num;
    }
};