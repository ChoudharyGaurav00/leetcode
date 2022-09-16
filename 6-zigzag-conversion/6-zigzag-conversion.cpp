class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<int> index(s.size());
        bool rev=false;
        int k=1;
        for(int i=0;i<s.size();i++)
        {
            index[i]=k;
            if(k==numRows)
            {
                rev=true;
            }
            if(k==1)
            {
                rev=false;
            }
            if(rev)
            {
                k--;
            }
            else
            {
                k++;
            }
        }
        for(auto x:index)
        {
          //  cout<<x<<" ";
        }
        string ans;
        map<int,string> mp;
        for(int i=1;i<=numRows;i++)
        {
            for(k=0;k<s.size();k++)
            {
                if(i==index[k]) mp[i].push_back(s[k]);
            }
        }
        for(auto x:mp)
        {
            ans+=x.second;
//            cout<<x.first<<" "<<x.second<<"\n";
        }
        
        return ans;
    }
};