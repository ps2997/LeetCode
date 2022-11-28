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
        int start = 0;
        // int rear = 0;
        int balance = 0;
        int deficiet = 0;
        
       for(int i=0; i<n; i++){
           
           balance += p[i].petrol - p[i].distance;
           
           if(balance<0){
               deficiet += balance;
               start = i+1;
               balance = 0;
           }
           
       }
       
       if(balance + deficiet>=0){
           return start;
       }return -1;
       //Your code here
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