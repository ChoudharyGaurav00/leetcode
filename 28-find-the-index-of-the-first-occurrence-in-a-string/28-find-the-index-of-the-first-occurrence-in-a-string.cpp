class Solution {
public:
    int strStr(string haystack, string needle) {
        int left=0;
        int right=0;
        string cur;
        while(right<haystack.size())
        {
            cur+=haystack[right];
            if(right-left+1==needle.size())
            {
                if(cur==needle) return left;
                
        //        cout<<cur<<"  ";
                cur.erase(0,1);
      //          cout<<cur<<" \n ";
                left++;
            
            }
            right++;
            
            
            
        }
        return -1;
        
        
    }
};