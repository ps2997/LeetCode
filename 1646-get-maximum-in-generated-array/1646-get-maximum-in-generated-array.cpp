class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if(n==0) return 0;
        if(n<=2) return 1;
        vector<int> values(n+1);
        values[0] = 0;
        values[1] = 1;
        values[2] = 1;
        
     
        
        for(int i=3; i<=n; i++){
            if(i%2==0){
                values[i]= values[i/2];
            }else{
                values[i] = values[i/2] + values[(i/2)+1];
            }
        }
        
        sort(values.begin(), values.end());
        return values[n];
        
    }
};