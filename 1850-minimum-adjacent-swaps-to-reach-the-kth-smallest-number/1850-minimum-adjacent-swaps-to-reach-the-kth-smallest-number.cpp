class Solution {
public:
    void next_perm(string&num )
    {
        int ptr1,ptr2;
        for(int i=num.size()-1;i>=0 ;i--)
        {
            if(num[i]>num[i-1])
            {
                ptr1=i-1;
                break;
            }
        }
        for(int i=num.size()-1;i>=0;i--)
        {
            if(num[i]>num[ptr1])
            {
                ptr2=i;
                break;
                        
            }
        }
        swap(num[ptr2],num[ptr1]);
        
        reverse(num.begin()+ptr1+1,num.end());
        
        
        
    }
    int CountSteps(string s1, string s2, int size)
{
    int i = 0, j = 0;
    int result = 0;
 
    // Iterate over the first string and convert
    // every element equal to the second string
    while (i < size) {
        j = i;
 
        // Find index element of first string which
        // is equal to the ith element of second string
        while (s1[j] != s2[i]) {
            j += 1;
        }
 
        // Swap adjacent elements in first string so
        // that element at ith position becomes equal
        while (i < j) {
 
            // Swap elements using temporary variable
            char temp = s1[j];
            s1[j] = s1[j - 1];
            s1[j - 1] = temp;
            j -= 1;
            result += 1;
        }
        i += 1;
    }
    return result;
}
    
    int getMinSwaps(string num, int k) {
        string orig=num;
        while(k--)
        {
            next_perm(num);
       //     cout<<num<<"\n";
        }
        //cout<<num<<"\n";
        // int cnt=0;
        // for(int i=0;i<orig.size();i++)
        // {
        //     if(orig[i]!=num[i]) cnt++;
        // }
        // return cnt-1;
        
        
        //adjacent swaps
          int ans= CountSteps(orig,num,orig.size());       
        return ans;
        
        
    }
};