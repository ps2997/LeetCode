class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i=0; i<n; i++){
            if(i%2==0){ 
                sum1+=piles[i];
            }else{
                sum2+=piles[i];
            }
        }
        
        if(sum1>sum2)return true;
        
        int newSum1 = 0;
        int newSum2 = 0;
        
        for(int i=n-1; i>=0; i--){
            if(i%2==0){ 
                newSum2+=piles[i];
            }else{
                newSum1+=piles[i];
            }
        }
        
        if(newSum1>newSum2) return true;
        return false;
        
        
        
    }
};