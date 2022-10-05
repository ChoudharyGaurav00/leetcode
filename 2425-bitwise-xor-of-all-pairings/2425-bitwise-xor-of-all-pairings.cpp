class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
     int ans=0;
      if(nums1.size()&1&&nums2.size()&1)
      {
          for(auto x:nums1)
          {
              ans^=x;
          }
          for(auto x:nums2)
          {
              ans^=x;
          }
      }
    else if(nums1.size()&1&&nums2.size()%2==0)
    {
        for(auto x:nums2)
        {
            ans^=x;
        }
        
    }
    else if(nums1.size()%2==0&&nums2.size()%2==0)
            {
                ans=0;
                
                
            }
            else
            {
                for(auto x:nums1)
                {
                    ans^=x;
                }
            }
    return ans;
    }
};