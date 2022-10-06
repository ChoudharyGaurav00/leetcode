class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> vec(2051,0);
        
        for(auto x:logs)
        {
            vec[x[0]]++;
            vec[x[1]]--;
        }
        for(int i=1950;i<=2050;i++)
        {
            vec[i]+=vec[i-1];
        }
        int year,mx=-1;
        for(int i=1950;i<=2050;i++)
        {
            if(vec[i]>mx)
            {
                mx=vec[i];
                year=i;
            }
        }
        return year;
        
        
        
    }
};