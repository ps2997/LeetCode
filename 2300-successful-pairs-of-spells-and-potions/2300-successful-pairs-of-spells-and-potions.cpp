class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        
        for(int i=0; i<spells.size(); i++){
            
            int start = 0;
            int end = potions.size() - 1;
            int index = potions.size();
            
            while(start<=end){
                int mid = (start+end)/2;
                long long a = potions[mid];
                long long b = spells[i];
                if(a*b>= success){
                    end = mid - 1;
                    index = mid;
                }else{
                    start = mid + 1;
                }
            }
            
            ans.push_back(potions.size() - index);
        }
        return ans;
    }
    
    // 5 8 8      
};