class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
       // 1 2 2 3
        
        // 1 2 3
        int n = nums.size(), count = 1;
        int ans = nums[n-1];
        
        for(int i=n-1; i>=1; i--){
            
            if(count==3) break;
            if(nums[i]>nums[i-1]){
                ans = nums[i-1];
                count++;
            }
        }
        
        if(count == 3) return ans;
        return nums[n-1];
        
    }
};