//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
      int currRemaining = 0;
        int totalRemaining = 0;
        int start = 0;
        for (int i = 0; i < n; i ++){
            int remaining = p[i].petrol - p[i].distance;
            if (currRemaining < 0){
                start = i;
                currRemaining = remaining;
            }
            else{
                currRemaining += remaining;
            }
            totalRemaining += remaining;
        }
        if (totalRemaining < 0)
            return -1;
        else
            return start;  
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends