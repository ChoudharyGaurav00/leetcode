class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
      map<int,int> xaxis,yaxis;
        xaxis[rec1[0]]++;
        xaxis[rec1[2]]--;
        xaxis[rec2[0]]++;
        xaxis[rec2[2]]--;
        
        
        yaxis[rec1[1]]++;
        yaxis[rec1[3]]--;
        yaxis[rec2[1]]++;
        yaxis[rec2[3]]--;
        
        int cnt=0;
        bool ans1=false;
        for(auto x:xaxis)
        {
            cnt+=x.second;
            if(cnt>1) ans1=true;
        }
        cnt=0;
        bool ans2=false;
        for(auto x:yaxis)
        {
            cnt+=x.second;
            if(cnt>1) ans2=true;
        }
        if(ans1&&ans2)
        {
            return true;
        }
        
        return false;
        
    }
};