Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3413/

/* Solution */

class TrieNode {
public:
    bool word;
    TrieNode* children[26];
    TrieNode()
    {
        word = false;
        memset(children,NULL,sizeof(children));
    }
};
class WordDictionary {
public:
     TrieNode* root = new TrieNode();
    bool find(string& word,int pos,TrieNode* root)
    {
        if(pos==word.size())
            return root->word;
        if(word[pos]!='.')
        {
            root=root->children[word[pos]-'a'];
            return root?find(word,pos+1,root):false;
        }
        TrieNode* tmp=root;
        for(int i=0;i<26;i++)
        {
            if(tmp->children[i]&&find(word,pos+1,tmp->children[i]))
                return true;
        }
        return false;
        
    }
    WordDictionary() {
        
    }
    void addWord(string word) {
        TrieNode* node = root;
        for (char ch : word) 
        {
            if (node->children[ch-'a']==NULL) 
            { 
                node->children[ch-'a'] = new TrieNode(); 
            }
            node = node->children[ch-'a'];
        }
        node->word = true;
    }
    bool search(string word) {
        return find(word,0,root);
    }
};