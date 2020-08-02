Problem Link :- https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3410/

/* Solution */

class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        v.resize(1000);
    }
    
    void add(int key) {
       if(key>v.size())
           v.resize(key+1,0);
        v[key]=1;
    }
    
    void remove(int key) {
       if(key<v.size())
           v[key]=-1;
    }
    
    bool contains(int key) {
        if(key<v.size())
          return v[key]==1;
        return false;
    }
};