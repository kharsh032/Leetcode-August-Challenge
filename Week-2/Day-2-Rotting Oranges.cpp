Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3418/

/* Solution */

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> dir={{-1,0},{1,0},{0,1},{0,-1}};
        if(grid.empty())
            return 0;
        int time=0,fresh_orange=0;
        queue<pair<int,int>> rotten_orange_pos;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                    fresh_orange++;
                else if(grid[i][j]==2)
                    rotten_orange_pos.push({i,j});
            }
        }
        if(fresh_orange==0)
            return 0;
        while(!rotten_orange_pos.empty()&&fresh_orange>0)
        {
            int current_rotten=rotten_orange_pos.size();
            time++;
            for(int j=0;j<current_rotten;j++)
            {
                pair<int,int> rotten=rotten_orange_pos.front();
                rotten_orange_pos.pop();
                for(int i=0;i<4;i++)
                {
                    int rotte_x_pos=rotten.first+dir[i][0];
                    int rotte_y_pos=rotten.second+dir[i][1];
                    if(rotte_x_pos<0||rotte_x_pos>=row||rotte_y_pos<0||rotte_y_pos>=col||grid[rotte_x_pos][rotte_y_pos]!=1)
                        continue;
                    grid[rotte_x_pos][rotte_y_pos]=2;
                    fresh_orange--;
                    rotten_orange_pos.push({rotte_x_pos,rotte_y_pos});
                }
            }
        }
        return fresh_orange<=0?time:-1;
    }
};