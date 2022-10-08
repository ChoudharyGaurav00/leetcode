class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int i=0,j=0;
        int maxf=0;
        int ans=0;
        while(j<s.length())
        {
            mp[s[j]]++;
            maxf=max(mp[s[j]],maxf);
                
                
            if(  (j-i+1)-maxf <=k )
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
         //       cout<<"here  "<<j<<"  "<<ans<<" \n";
                mp[s[i]]--;
                i++;
                j++;
            }
            
         }
        
        
        return ans;
        
        
        
        
        return 0;
    }
};