class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<int> temp = candies;
        vector<bool> ans(temp.size());
        
        sort(temp.begin(), temp.end());
        
        int maxVal = temp[temp.size()-1];
        
        for(int i=0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= maxVal){
                ans[i] = true;
            }else{
                ans[i] = false;
            }
        }
        return ans;
    }
};