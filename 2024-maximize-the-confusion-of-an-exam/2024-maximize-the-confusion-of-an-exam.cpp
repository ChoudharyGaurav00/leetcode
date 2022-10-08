class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
     int maxt=0;
        int temp=k;
        int i=0,j=0;
        while(j<answerKey.size())
        {
            if(answerKey[j]=='F') temp--;
            
            if(temp>=0)
            {
                maxt=max(maxt,j-i+1);
                j++;
            }
            else if(temp<0)
            {
                while(i<answerKey.size())
                {
                    if(answerKey[i]=='F')
                    {
                        temp++;
                        i++;
                        break;
                    }
                    i++;
                }
                maxt=max(maxt,j-i+1);
                j++;
            }
            
        }
        
        
        i=0;
        j=0;
        temp=k;
        int maxf=0;
        while(j<answerKey.size())
        {
            if(answerKey[j]=='T') temp--;
            
            if(temp>=0)
            {
                maxf=max(maxf,j-i+1);
                j++;
            }
            else if(temp<0)
            {
                while(i<answerKey.size())
                {
                    if(answerKey[i]=='T')
                    {
                        temp++;
                        i++;
                        break;
                    }
                    i++;
                }
                maxf=max(maxf,j-i+1);
                j++;
            }
            
        }
        return max(maxt,maxf);
        
        
        
    }
};