class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int index = -1;
        
        
        // we find the breakPoint 
        for(int i=n-2; i>=0; i--){
            if(nums[i+1]>nums[i]){
                index = i;
                break;
            }
        }
        
        if(index == -1){
            return reverse(nums.begin(), nums.end());
        }
        
        
        // we swap the next largest number after the breakpoint
        for(int i=n-1; i>=index; i--){
            if(nums[i]>nums[index]){
                swap(nums[index], nums[i]);
                break;
            }
        }
        
        return reverse(nums.begin()+index+1, nums.end());
        
    }
};