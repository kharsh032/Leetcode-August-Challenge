Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/3434/

/* Solution */

class TrieNode
{
public:
    bool word;
    TrieNode* next[26];
    TrieNode()
    {
        word = false;
        memset(next,NULL,sizeof(next));
    }
};
class StreamChecker {
public:
    TrieNode* root;
    string input;
    void insert(string s)
    {
        TrieNode* node=root;
        for(int i=s.size()-1;i>=0;i--)
        {
            if (node->next[s[i]-'a']==nullptr) 
            { 
                node->next[s[i]-'a'] = new TrieNode(); 
            }
            node = node->next[s[i]-'a'];
        }
        node->word=true;
    }
    StreamChecker(vector<string>& words) 
    {
        this->root=new TrieNode();
        for(int i=0;i<words.size();i++)
            insert(words[i]);
    }
    
    bool query(char letter) {
        input+=letter;
        TrieNode* node=root;
        for(int i=input.size()-1;i>=0;i--)
        {
            if (node->next[input[i]-'a']==nullptr)
                return false;
            node = node->next[input[i]-'a'];
            if(node->word)
                return true;
        }
        return false;
    }
};