class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        
        for(int i = 0; i<haystack.size(); i++){
            string check = haystack.substr(i,n);
            // cout<<check<<" "<<i<<endl;
            if(check==needle){
                return i;
            }    
        }
        
        return -1;
        
    }
};