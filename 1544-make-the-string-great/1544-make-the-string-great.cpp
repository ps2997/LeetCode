class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        string ans = "";
        
        for(int i=0; i<s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if( abs(st.top()-s[i])==32 ){      // diff b/w them is always constant like a - 'A' == 32 (ASCII)
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
        
    }
};