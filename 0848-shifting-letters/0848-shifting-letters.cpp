class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long int sum=0;
        for(int i=0;i<shifts.size();i++)
        {
         sum+=shifts[i];   
        }
        
        for(int i=0;i<s.size();i++)
        {
            long long num=s[i]-'a';
            num+=sum;
            cout<<num;
            num=num%26;
            s[i]= char('a'+num);
            sum-=shifts[i];
        }
        return s;
    }
};