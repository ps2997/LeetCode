class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // 1 2 2 3 4 5 5 6
        return nums[nums.size()-k];
        // 1 2 3 4 5 6
        
    }
};