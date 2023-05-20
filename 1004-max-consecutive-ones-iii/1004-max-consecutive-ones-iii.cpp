class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int ans = 0;
        
        int start = 0;
        for(int i=0; i<n; i++){
            
            if(nums[i] == 0){
                count++;
            }
            
            while(count>k){
                
                if(nums[start]==0){
                    count--;
                }
                
                start++;
            }
            
            ans = max(ans, i-start+1);
            // count = 0;
            // j=0;
        }
        
        return ans;
    }
};