class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size()), temp;
        
        // for(int i=n; i<nums.size(); i++){
        //     temp.push_back(nums[i]);
        // }
        
        // 3 4 7
        int j=0;
        for(int i=0; i<n; i++){
            ans[j] = nums[i];
            j+=2;
        }
        
        int k = 1;
        for(int i=n; i<nums.size(); i++){
            ans[k] = nums[i];
            k+=2;
        }
        
        
        return ans;
    }
};