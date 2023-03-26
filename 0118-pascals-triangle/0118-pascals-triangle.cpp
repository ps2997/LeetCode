class Solution {
public:
    
//     void solve(vector<vector<int>> ans, vector<int> dp, int n){
//         if(n==1){
//             return 1;
//         }
        
        
//     }
    
    vector<vector<int>> generate(int numRows) {
       
        
        vector<vector<int>> dp(numRows);
        
        //  if(numRows==1){
        //     dp[0][0] = 1;
        //      return dp;
        // }
        
        // dp[0][0] = 1;
        // dp[1][0] = 1;
        // dp[1][1] = 1;
        
        for(int i=0; i<numRows; i++){
            dp[i].resize(i+1, 1);
            int j=1;
            while(j<i){
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                j++;    
            }
        }
        return dp;
    }
};