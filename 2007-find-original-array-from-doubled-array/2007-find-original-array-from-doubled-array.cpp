class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        if(changed.size()&1) return ans;
        
        //sort(changed.begin(),changed.end());
        int cnt_0=count(changed.begin(),changed.end(),0);
        if(cnt_0&1) return ans;
        
        
        map<int,int> mp;
        for(auto x:changed)
        {
            mp[x]++;
        }
        
        
        bool ansss=true;
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            int num=it->first;
            int occ=it->second;
            if(num&1)
            {
                ansss=false;
                break;
            }
            else
            {
                int targ=num/2;
                if(mp[targ]>=occ)
                {
                    
                    if(targ==0) break;
                    mp[targ]-=occ;
                    for(int i=0;i<occ;i++)
                    {
                        ans.push_back(targ);
                        
                    }
                   if(mp[targ]==0)
                       mp.erase(targ);
                      
                    
                }
                else
                {
                    ansss=false;
                    break;
                }
            }
        }
        
        if(ansss)
        {
            if(cnt_0>0)
            {
                
                for(int i=0;i<cnt_0/2;i++)
                {
                    ans.push_back(0);
                }
                
            }
            return ans;
        }
        else
        {
            vector<int> fin;
            return fin;
        }
     return ans;   
    }
};