class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int left=INT_MAX,mid=INT_MAX;
        for(auto x:nums)
        {
            if(x<=left)
            {
                left=x;
            }
            else if(x<=mid)
            {
                mid=x;
            }
            else
            {
                return true;
            }
        }
        return false;
        
        
        
    }
};