class Solution {
public:
    void level(vector<vector<int>>&grid,int i,int j)
    {
        if(i<0||i>=grid.size()) return ;
        if(j<0||j>=grid.size()) return ;
        if(grid[i][j]==1)
        {
       //   cout<<i<<j<<"  here\n";
            grid[i][j]=2;
            level(grid,i+1,j);
            level(grid,i-1,j);
            level(grid,i,j+1);
            level(grid,i,j-1);
            
        }
    
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        
        bool br2=false;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                if(grid[i][j]==1)
                {
                    level(grid,i,j);
                    br2=true; 
                    break;
                }
            }
            if(br2) break;
        }
        
        
//         for(int i=0;i<grid.size();i++)
//         {
//             for(int j=0;j<grid.size();j++)
//             {
//         //        cout<<grid[i][j]<<" ";
//             }
//             cout<<"\n";
//         }
        
        
        int dist=INT_MAX;
       for(int i=0;i<grid.size();i++)
       {
           for(int j=0;j<grid.size();j++)
           {
               if(grid[i][j]==1)
               {
                   for(int i1=0;i1<grid.size();i1++)
                   {
                       for(int j1=0;j1<grid.size();j1++)
                       {
                           if(grid[i1][j1]==2)
                           {
                               dist=min(dist,abs(i1-i)+abs(j1-j));
                           }
                       }
                   }
               }
           }
       }
    return dist-1;
        
        
    }
};