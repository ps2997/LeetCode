class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        
        map<int,int> mp;
        
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        
        int maxi = -1;
        
        for(auto i:mp){
            if(i.first%2 == 0){
                maxi = max(maxi, i.second);
            }
        }
        
        // sort(nums.begin(), nums.end());
        
        for(auto i:mp){
            if(i.first%2==0 && i.second == maxi) return i.first;
        }
        
        return maxi;
        
        
    }
};