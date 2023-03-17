class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        long long sum = 0;
        
        for(int i=0; i<nums.size()-1; i++){
            // 2 3 
            // vector<int> temp(2);
            // temp.push_back(nums[i]);
            // temp.push_back(nums[i+1]);
            long long max = INT_MIN;
			long long min = INT_MAX;
            
           // cout<<temp[0]<<" ";
            
            for(int j=i; j<nums.size(); j++){
                if(nums[j]<min) min = nums[j];        
                if(nums[j]>max) max = nums[j];
                sum = sum + (max - min); // 1 + 2 + 1
                // cout<<sum<<endl;
            }
            cout<<endl;
        }
        return sum;
        
    }
};