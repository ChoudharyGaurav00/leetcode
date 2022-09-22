class Solution {
public:
    bool checkString(string s) {
        bool found=false;
        bool ans=true;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='a')
            {
                found=true;
            }
            if(found&&s[i]=='b')
            {
                ans=false;
                break;
            }
        }
        return ans;
    }
};