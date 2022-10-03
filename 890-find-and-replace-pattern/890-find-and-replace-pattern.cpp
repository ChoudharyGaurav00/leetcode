class Solution {
public:
    
    template<typename T>
void removeDuplicates(std::vector<T>& vec)
{
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        
        int cnt=0;
        map<char,int> mp;
        vector<string> newp;
        for(int i=0;i<pattern.size();i++)
        {
            if(mp.find(pattern[i])!=mp.end())
            {
                newp.push_back(to_string( mp[pattern[i]]));
               // pattern[i]= to_string( mp[pattern[i]])[0];
            }
            else
            {
                cnt++;
                mp[pattern[i]]=cnt;
                
                newp.push_back(to_string( mp[pattern[i]]));
                
                //..pattern[i]=to_string(mp[pattern[i]])[0];
            }
        }
        
//         for(auto x:newp)
//         {
//             cout<<x<<" ";
//         }
        
        for(auto x:words)
        {
            mp.clear();
            cnt=0;
            auto temp=x;
            vector<string> curp;
            for(int i=0;i<x.size();i++)
        {
            if(mp.find(x[i])!=mp.end())
            {
                curp.push_back(to_string( mp[x[i]]));
            }
            else
            {
                cnt++;
                mp[x[i]]=cnt;
                curp.push_back(to_string(mp[x[i]]));
            }
        }
            
            
            int bahar=0;
            for(;bahar<curp.size()&&bahar<newp.size();bahar++)
            {
                if(newp[bahar]!=curp[bahar]) break;
            }
            if(bahar==curp.size())
            {
                ans.push_back(temp);
            }
            
            
            
        }
        
        
       
        
        return ans;
        
        
        
    }
};