class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans=0;
        int score=0;
        sort(tokens.begin(),tokens.end());
        int left=0;
        int right=tokens.size()-1;
        while(left<=right)
        {
            if(power>=tokens[left])
            {
                score++;
                power-=tokens[left];
                ans=max(score,ans);
                left++;
            }
            else if(score>0)
            {
                power+=tokens[right];
                score--;
                ans=max(score,ans);  
                right--;
            }
            else
            {
                break;
            }
        }
        return ans;
        
    }
};