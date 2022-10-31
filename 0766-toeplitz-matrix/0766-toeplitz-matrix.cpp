class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        cout<<m<<"  ";
        for(int i=0;i<m;i++)
        {
            int j=i;
            int temp=0;
        //    cout<<temp<<"  "<<j<<" ; ";
            vector<int> vec;
            while(temp<n&&j<m)
            {
                vec.push_back(matrix[temp][j]);
                temp++;
                j++;
            }
            
            // for(auto x:vec)
            // {
            //     cout<<x<<" ";
            // }
            // cout<<"\n";
            if(vec.size()==1) {}
            else 
            {
                for(int k=1;k<vec.size();k++)
                {
                    if(vec[k]!=vec[k-1])
                    {
                      return false;   
                    }
                }
            }
            
        }
        
        for(int i=1;i<n;i++)
        {
            int j=0;
            int temp=i;
            vector<int> vec;
            while(temp<n&&j<m)
            {
                vec.push_back(matrix[temp][j]);
                temp++;
                j++;
            }
            if(vec.size()==1) {}
            else 
            {
                for(int k=1;k<vec.size();k++)
                {
                    if(vec[k]!=vec[k-1])
                    {
                      return false;   
                    }
                }
            }   
        }
        
        return true;
        
    }
};