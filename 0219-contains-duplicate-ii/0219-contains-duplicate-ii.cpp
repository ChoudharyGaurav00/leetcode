class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0) return false;
       if(nums.size()<2) return false;
        map<int,int> table;
        
        for(int i=0;i<=k&&i<nums.size();i++)
        {
            table[nums[i]]++;
            if(table[nums[i]]==2)
                return true;
        }
        
        for(int i=k+1;i<nums.size();i++)
        {
            table[nums[i-k-1]]--;
            table[nums[i]]++;
            if(table[nums[i]]==2)
                return true;
        }
        return false;
    }
};