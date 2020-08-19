Problem Link:- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3429/

/* SOlution */

class Solution {
public:
    bool isvowel(char ch)
    {
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='O'||ch=='E'||ch=='I'||ch=='U';
    }
    string toGoatLatin(string S) {
        stringstream ss(S);
        string ans,word;
        int i=1;
        while(ss>>word)
        {
            if(!isvowel(word[0]))
            {
                char c=word[0];
                ans+=word.substr(1);
                ans+=c;
            }
            else
                ans+=word;
            ans+="ma";
            for(int j=1;j<=i;j++)
                ans+="a";
            i++;
            ans+=" ";
        }
        return ans.substr(0,ans.size()-1);
    }
};