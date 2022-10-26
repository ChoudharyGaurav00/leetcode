typedef long long int ll; 
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<2)
        {
            return false;
        }
        
     map<ll,int> mp;
        ll sum=0;
        bool ans=false;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum%k==0) 
            {
                int temp=mp[sum%k];
                if(i-temp>=2) return true;
            }
            else
            {
                
                if(mp.find(sum%k)!=mp.end())
                {
                          int temp=mp[sum%k];
                    if(i-temp>=2) return true;
                    
                
                }
                else
                {
                mp[sum%k]=i;
                }
            }
            
        }
    
    return false;
    
    
    
    
    
    }
};