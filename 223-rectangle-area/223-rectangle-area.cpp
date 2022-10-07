class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=(ax2-ax1)*(ay2-ay1);
        int area2=(bx2-bx1)*(by2-by1);
        
        map<int,int> mpx;
        mpx[ax1]++;
        mpx[ax2]--;
        mpx[bx1]++;
        mpx[bx2]--;
        map<int,int> mpy;
        mpy[ay1]++;
        mpy[ay2]--;
        mpy[by1]++;
        mpy[by2]--;
        
        int count=0;
        int x1ov=0,x2ov=0;
        bool flag1=false;
        for(auto x:mpx)
        {
      //      cout<<x.first<<"  ";
            count+=x.second;
            if(flag1)
            {
      //         cout<<"here2";
        //       cout<<x.first<<"  \n";
        
                x2ov=x.first;
                flag1=false;
          //      break;
            
            }
            if(count>1)
            {
          //     cout<<"here1 ";
            //   cout<<x.first<<"  \n";
                flag1=true;
                x1ov=x.first;
             }
            
        }
    //    cout<<"out\n";
 //       cout<<x1ov<<"  "<<x2ov<<" \n ";
        count=0;
          int y1ov=0,y2ov=0;
        bool flag2=false;
        for(auto x:mpy)
        {
      //      cout<<x.first<<"  ";
            count+=x.second;
            if(flag1)
            {
       //        cout<<"here2";
         //      cout<<x.first<<"  \n";
        
                y2ov=x.first;
                flag1=false;
          //      break;
            
            }
            if(count>1)
            {
       //        cout<<"here1 ";
     //          cout<<x.first<<"  \n";
                flag1=true;
                y1ov=x.first;
             }
            
        }
        int overlap=(x2ov-x1ov)*(y2ov-y1ov);
   //     cout<<area1<<"   "<<area2<<"   "<<overlap<<"\n";
        return area1+area2-overlap;
        
    }
};