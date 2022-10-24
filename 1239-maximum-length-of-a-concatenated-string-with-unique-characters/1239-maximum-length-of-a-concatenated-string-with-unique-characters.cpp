class Solution {
public:
    int ans;
    bool isuq(string str)
    {
        if(str.size()>26) return false;
        
        map<char,int> mp;
        for(auto x:str)
        {
            mp[x]++;
            if(mp[x]>1) return false;
        }
        return true;
        
    }
    
    void solve(vector<string>& arr,string& cur,int curptr)
    {
        if(curptr==arr.size())
        {
            if(isuq(cur))
            {
                int ln=cur.length();
                ans=max(ans,ln);
            }
            return;
        }
        
            solve(arr,cur,curptr+1);
            cur+=arr[curptr];
            int temp=arr[curptr].size();
            solve(arr,cur,curptr+1);
            while(temp--) cur.pop_back();
            
    }
    
    
    int maxLength(vector<string>& arr) {
        ans=0;
        string cur;
        int i=0;
        solve(arr,cur,i);
        return ans;
    }
};