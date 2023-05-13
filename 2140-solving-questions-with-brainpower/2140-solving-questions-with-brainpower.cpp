class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        
         long long dp[200001] = {};   // all the values are set to zero
        
        for(int i=n-1; i>=0; i--){
            long long pick = questions[i][0] + dp[questions[i][1] + 1 + i];
            long long notPick = dp[i+1];
            dp[i] = max(pick, notPick);
        }
        return dp[0];
    }
};