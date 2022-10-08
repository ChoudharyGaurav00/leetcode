typedef long long int ll;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int i=0,j=0;
        ll ans=0;
        ll sum=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            
            if(sum*(j-i+1)>=k)
            {
                
                
                while(sum*(j-i+1)>=k)
                {
                ans+=nums.size()-j;
                sum-=nums[i];
   //             cout<<ans<<" \n ";
                i++;
                }
                j++;
            }
            else
            {
                j++;
            }
        }
        ll temp1=(nums.size())*(nums.size()+1)/2;
        return temp1-ans;
        
    }
};