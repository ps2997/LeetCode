class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> mini;
        
        for(int i=0; i<nums.size(); i++){
            int value = nums[i]*nums[i];
            mini.push(value);
        }
        
        vector<int> ans;
        
        while(!mini.empty()){
            ans.push_back(mini.top());
            mini.pop();
        }
        return ans;
        
    }
};