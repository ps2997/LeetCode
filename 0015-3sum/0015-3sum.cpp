class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
   sort(nums.begin(), nums.end());
        
    // if()    
        
        
    vector<vector<int>> res;
    for ( int i=0; i<nums.size(); i++) {
        if ((i>0) && (nums[i]==nums[i-1])){
              continue;
        }
        int l = i+1, r = nums.size()-1;
        
        while (l<r) {
            int s = nums[i]+nums[l]+nums[r];
            if (s>0) r--;
            else if (s<0) l++;
            else {
                res.push_back(vector<int> {nums[i], nums[l], nums[r]});
                 while (l<r && nums[l]==nums[l+1]) l++;
                while (l<r && nums[r]==nums[r-1]) r--;
                l++; r--;
            }
        }
    }
        
    return res;
        
    }
};
