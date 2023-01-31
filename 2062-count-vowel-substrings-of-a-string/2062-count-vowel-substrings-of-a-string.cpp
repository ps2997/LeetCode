class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    
    
    int countVowelSubstrings(string word) {
        int count = 0, n = word.size();
       
        
        for(int i=0; i<n; i++){
             unordered_set<char> s;
            for(int j=i; j<n; j++){
                if(!isVowel(word[j])) break;
                s.insert(word[j]);
                if(s.size()==5) count++;
            }
        }
        
        return count;
        
    }
};