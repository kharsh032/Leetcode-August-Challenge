Problem Link :-  https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3422/

/* SOlution  */

vector<string> GenaretallComb(string s,int len)
{
    int mask=1<<s.length();
    vector<string> hold;
    string comString="";
    for(int no=1;no<mask;no++)
    {
        int num = no,i = 0;
        //cout<<"no  "<<num<<"\n";
        while(num)
        {
            if(num&1)
                comString = comString + s[i];
            i++,
            num>>=1;
           /// cout<<"i is  "<<i<<"   nums  "<<num<<"  "<<comString<<"\n";
            
        }
        if(comString.length()==len)
            hold.push_back(comString);
        comString = "";
    }
    return hold;
}

class CombinationIterator {
public:
    vector<string> ans;
    int cur;
    CombinationIterator(string characters, int combinationLength)
    {
        this->ans = GenaretallComb(characters,combinationLength);
        this->cur =0;
        sort(ans.begin(),ans.end());
    }
    
    string next() {
        return ans[cur++];
    }
    
    bool hasNext() {
        return cur<ans.size();
    }
};