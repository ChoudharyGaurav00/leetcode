class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string world1,world2;
        for(auto x:word1)
        {
            world1+=x;
        }
        for(auto x:word2)
        {
            world2+=x;
        }
        return world1==world2;
    
    
    
    
    }
};