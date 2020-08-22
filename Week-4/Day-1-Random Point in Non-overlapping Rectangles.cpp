Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/3433/

/* Solution */

class Solution {
public:
    vector<vector<int>> rect;
    vector<int> area;
    Solution(vector<vector<int>>& rects) {
        int total=0;
        rect=rects;
        for(int i=0;i<rects.size();i++)
        {
            int sum=(rect[i][2]-rect[i][0]+1)*(rect[i][3]-rect[i][1]+1);
            total+=sum;
            area.push_back(total);
        }
    }
    
    vector<int> pick() {
        int ran=rand()%area.back();
        int final=upper_bound(area.begin(),area.end(),ran)-area.begin();
       // int =area[ind];
        int x=rand()%(rect[final][2]-rect[final][0]+1)+rect[final][0];
        int y=rand()%(rect[final][3]-rect[final][1]+1)+rect[final][1];
        return {x,y};
    }
};
