class Solution {
public:
         vector<int> twoSum(vector<int>& nums, int target) {
              vector<int> copy(nums);
        sort(copy.begin(),copy.end());
        int num_1,num_2;
        for(int i=0;i<copy.size();i++)
        {

          bool first=  binary_search(copy.begin()+i+1,copy.end(),target-copy[i]);
          if(first)
          {
              cout<<i<<"\n";
              num_1=copy[i];
              num_2=target-num_1;
          }
        }
        cout<<num_1<<" "<<num_2<<"\n";
        
        auto it1=find(nums.begin(),nums.end(),num_1);
        int sec=it1-nums.begin();
        auto it2=find(nums.begin(),nums.end(),num_2);
        if(it1==it2)
        {
          int pos=it1-nums.begin();
          it2=find(nums.begin()+pos+1,nums.end(),num_2);
        }
        vector<int> ans(2);
        ans[0]=it1-nums.begin();
        ans[1]=it2-nums.begin();
  
        return ans;
    }
};