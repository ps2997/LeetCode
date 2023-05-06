class Solution {
public:
    
    bool isVowel(char c){
        
        if((c=='a') || (c=='e') || (c=='i') ||  (c=='o') || (c=='u')){
                    return true;
        }
        return false;
    }
    
    int maxVowels(string s, int k) {
        
        // if(s=="weallloveyou") return 4;
        
        int res = 0, l = 0, cnt = 0;
        
        for(int r=0; r<s.size(); r++){
            if(isVowel(s[r])){
                cnt++;
            }
            
            if(r-l+1>k){
                if(isVowel(s[l])){
                    cnt--;
                }
                l++;
            }
            
            res = max(res, cnt);
        }
        
        return res;
        
    }
};