class LUPrefix {
public:
   
    map<int,int> mp;
    int ng;
    LUPrefix(int n) {
        mp.clear();
        for(int i=1;i<=n;i++)
        {
            mp[i]++;
        }
        ng=n;
        mp[ng+1];
        
    //    memset(vec,0,sizeof(vec));
    }
    
    void upload(int video) {
        mp.erase(video);
    }
    
    int longest() {
        int ans;
        
        for(auto x:mp)
        {
            ans=x.first;
            break;
        }
        
        
        return ans-1;
        
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */