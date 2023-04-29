//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int sum = 0, maxLen = 0;
        map<int, int> mp;
        
        for(int i=0; i<N; i++){
            
            sum+=A[i];
            // add the sum here
            
            if(sum==K){
                maxLen = max(maxLen, i+1);
            }
            
            int rem = sum - K;
            
            if(mp.find(rem) != mp.end()){
                int len = i - mp[rem];
                maxLen = max(maxLen, len);
            }
            
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
            
        }
        
        return maxLen;
        
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends