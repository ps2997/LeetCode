class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);
        
        vector<int> positive;
        vector<int> negative;
        
        for(int i=0; i<n; i++){
            int element = nums[i];
            if(nums[i]>0) positive.push_back(element);
            if(nums[i]<0) negative.push_back(element);
        }
        

        int pos=0,neg=0;
        int k = 0;
        while(k<n){
            
            if(k%2==0){
                ans[k]=positive[pos];
                pos++;
            }else{
                ans[k]=negative[neg];
                neg++;
            }
            
            k++;
        }
        
        return ans;
        
        
    }
};