class Solution {
public:
    
    
    
    bool valid(int nums0,int nums1,int nums2)
    {
         bool an1=false;
        bool an2=false;
        bool an3=false;
        
        if(nums0<nums1+nums2)
        {
            an1=true;
        }
        if(nums1<nums0+nums2)
        {
            an2=true;
        }
        if(nums2<nums0+nums1)
        {
            an3=true;
        }
        if(an1&&an2&&an3)
        {
            return true;
        }
        return false;
        
    }
    
    
    
    
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        
        for(int i=nums.size()-1;i-2>=0;i--)
        {
            bool check =valid(nums[i],nums[i-1],nums[i-2]);
            if(check)
            {
                ans=nums[i]+nums[i-1]+nums[i-2];
                break;
            }
       
        }
        return ans;
        
    }
};