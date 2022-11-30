class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        vector<int> contains_freq;
        
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        
        for(auto i:m){
             contains_freq.push_back(i.second);
        }
        
        sort(contains_freq.begin(), contains_freq.end());
        
        for(int j=0; j<contains_freq.size()-1; j++){
            if(contains_freq[j]==contains_freq[j+1]){
                return false;
            }
        }
        return true;
    }
};