class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int max_value = 0;
        
        for(int i=1; i<n-1; i++){
            
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int left = i;
                int right = i;
                
                while(left>0 && arr[left]>arr[left-1]){
                    left--;
                }
                
                while(right<n-1 && arr[right]>arr[right+1]){
                    right++;
                }
                
                max_value = max(max_value, right-left+1);
            }
        }
        
        return max_value;
    }
};