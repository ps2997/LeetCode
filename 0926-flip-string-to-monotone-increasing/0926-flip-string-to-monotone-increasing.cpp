class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int ans = 0;
        int num_ones = 0;
        // num_ones is the potential flips

        for(int i = 0; i<s.size(); i++){
            char c = s[i];

            if (c == '1') num_ones++;

            // we cancel out the '0's that comes after 1
            else if(num_ones>0){
                num_ones--;
                ans++;
            }
        }

        return ans;


    }
};