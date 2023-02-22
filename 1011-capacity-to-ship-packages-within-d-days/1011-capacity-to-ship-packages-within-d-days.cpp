class Solution {
public:
    
    bool check(vector<int> weights, int days, int n, int mid){
        int d = 1;
        int sum=0;
        for(int i=0; i<n; i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
            }else{
                d++;
                sum=weights[i];
            }
        }
        
        if(d<=days)return true;
        return false;
        
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();
        int sum = 0, ans;
        int max = 0;
        for(int i=0; i<n; i++){
            if(weights[i]>=max) max = weights[i];
            sum+=weights[i];
        }
        
        int low = max;
        int high = sum;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(check(weights, days, n, mid)){
                ans = mid;
                high=mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
        
    }
};