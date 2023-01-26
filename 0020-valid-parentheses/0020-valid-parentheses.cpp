class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                ans.push(s[i]);
            }
            
            else{
                
                if(!ans.empty()){
                    char top = ans.top();
                    
                    if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='[')){
                        ans.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
                
            }
        }
        // yes
        
        if(ans.empty()){
            return true;
        }return false;
    }
};
