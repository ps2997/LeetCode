class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long length = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                length++;
                ans+=length;
            }else{
                length = 0;
            }
        }
        
        return ans;
    }
};