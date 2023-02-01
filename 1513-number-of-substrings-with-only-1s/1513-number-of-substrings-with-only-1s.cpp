class Solution {
public:
    int numSub(string s) {
        int res = 0, count = 0;
        int n = s.size();
        int mod = 1000000007;
        
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                count++;
            }else{
                count = 0;
            }
             res = (res+count)%mod;
        }
        
        return res;
    }
};