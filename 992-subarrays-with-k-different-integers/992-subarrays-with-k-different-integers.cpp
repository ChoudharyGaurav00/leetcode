class Solution {
public:
    
    int atmostk(vector<int>&nums , int k)
    {
        map<int,int> mp;
      int i=0,j=0;
        
        int ans=0;
        while(j<nums.size())
        {
            mp[nums[j]]++;
            if(mp.size()<=k)
            {
                ans+=j-i+1;
                j++;
            }
            else
            {
                while(mp.size()>k)
                {
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)
                    {
                        mp.erase(nums[i]);
                    }
                    i++;
                    
                    
                }
                ans+=j-i+1;
                j++;
            }
            
        }
        return ans;
        
    }
    
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      int i=0,j=0;
 
        
     int ak=atmostk(nums,k);
        int ak1=atmostk(nums,k-1);
        
        return ak-ak1;
        
        
        
        
    }
};