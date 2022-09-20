class Solution {
public:
   static bool mycomp (pair<int,int>&a , pair<int,int>&b)
    {
        return a.second<b.second;
        
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,int>> veca;
        vector<pair<int,int>> vecb;
        
        for(int i=0;i<costs.size();i++)
        {
            if(costs[i][0]<costs[i][1])
            {
            veca.push_back(make_pair(costs[i][0],costs[i][1]-costs[i][0]));
            }
            else
            {
                vecb.push_back(make_pair(costs[i][1],costs[i][0]-costs[i][1]));
                
            }
            
        }   
        int ans=0;
        if(veca.size()==vecb.size())
        {
            for(auto x:veca)
            {
                ans+=x.first;
            }
            for(auto x:vecb)
            {
                ans+=x.first;
            }
            
        }
        else if(veca.size()>vecb.size())
        {
            sort(veca.begin(),veca.end(),mycomp);
            int diff=veca.size()-vecb.size();
            diff/=2;
            for(int i=0;i<veca.size();i++)
            {
                if(i<diff)
                {
                    ans+=veca[i].first+veca[i].second;
                }
                else
                {
                    ans+=veca[i].first;
                }
            }
            for(auto x:vecb)
            {
                ans+=x.first;
            }
            
        }
        else
        {
            sort(vecb.begin(),vecb.end(),mycomp);
            int diff=vecb.size()-veca.size();
            diff/=2;
            for(int i=0;i<vecb.size();i++)
            {
                if(i<diff)
                {
                    ans+=vecb[i].first+vecb[i].second;
                }
                else
                {
                    ans+=vecb[i].first;
                }
            }
            for(auto x:veca)
            {
                ans+=x.first;
            }
            
        }
            
        return ans;
    }
};