Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3427/

/* Solution */

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> distributeCandies(num_people,0);
        int k=0;
        while(candies>=0)
        {
            for(int i=0;i<num_people;i++)
            {
                int req_candies=k*num_people+(i+1);
                int temp=candies;
                candies-=req_candies;
                if(candies<=0)
                {
                    distributeCandies[i]+=temp;
                    break;
                }
                distributeCandies[i]+=req_candies; 
            }
            k++;
        }
        return distributeCandies;
    }
};