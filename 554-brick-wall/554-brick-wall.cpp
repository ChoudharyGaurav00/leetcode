class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
     int ans=wall.size();
        
     int tot=0;
     for(int i=0;i<1;i++)
     {
         for(int j=0;j<wall[0].size();j++)
         {
             tot+=wall[i][j];
         }
     }
        
      
     for(int i=0;i<wall.size();i++)
     {
         
         for(int j=1;j<wall[i].size();j++)
         {
             wall[i][j]+=wall[i][j-1];
         }
     }
        map<int,int> mp;
      for(int i=0;i<wall.size();i++)
     {
         
         for(int j=0;j<wall[i].size()-1;j++)
         {
           cout<<wall[i][j]<<" ";  
            mp[wall[i][j]]++;
         }
          
     }   
        
      int maxx=0;
        for(auto x:mp)
        {
            maxx=max(x.second,maxx);
        }
        cout<<maxx;
        
        return wall.size()-maxx;
        
        
        
        
        
    }
};