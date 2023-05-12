class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";
        int count = 0;
        
        for(int i=n-1; i>=0; i--){
            char ch = num[i];
            int temp = int(num[i]) - 48;
            if(temp%2!=0){
                // ans = num;
                break;
            }else{
                count++;
            }
        }
        if(count == n){
            return ans;
        }
        ans = num;
        while(count--){
            ans.pop_back();
        }
        
        return ans;
        
    }
};