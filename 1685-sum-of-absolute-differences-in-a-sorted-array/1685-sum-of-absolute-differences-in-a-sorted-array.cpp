class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        
        int Lsum = 0;
        int Lcount = 0;
        
        for(int i=0; i<n; i++){
            int Rsum = sum - Lsum - nums[i];
            int Rcount = n - Lcount - 1;
            
            //  this is basically maths 
            ans[i] = (Lcount*nums[i] - Lsum) + (Rsum - Rcount*nums[i]);
            Lsum+=nums[i];
            Lcount++;
        }
        return ans;
    }
};