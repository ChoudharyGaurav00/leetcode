class Solution {
public:
    string reverseWords(string s) {
        int slow=0,fast=0;
        while(fast<s.length())
        {
            while(fast<s.length()&&s[fast]!=' '){
                fast++;
            }
            reverse(s.begin()+slow,s.begin()+fast);
            slow=fast+1;
            fast++;
        }
        return s;
    }
};