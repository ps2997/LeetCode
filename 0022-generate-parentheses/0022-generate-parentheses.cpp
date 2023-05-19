class Solution {
public:
    
    void solve(vector<string> &ans, int n, string values, int openCount, int closedCount){
        
        // base case
        if(values.size() == 2*n){
            ans.push_back(values);
            return;
        }
        
        if(openCount<n){
            solve(ans, n, values+"(",openCount+1, closedCount);
        }
        
        if(closedCount<openCount){
            solve(ans, n, values+")",openCount, closedCount+1);
        }
        
        
    }
    
    
    vector<string> generateParenthesis(int n) {
        
        int openCount = 0;
        int closedCount = 0;
        string values = "";
        vector<string> ans;
        
        solve(ans, n, values, openCount, closedCount);
        return ans;
        
        
    }
};