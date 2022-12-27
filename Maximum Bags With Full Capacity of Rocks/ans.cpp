class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> temp(n);
        int ans = 0;

        for(int i=0; i<n; i++){
            temp[i] = capacity[i]  - rocks[i];
        }

        sort(temp.begin(), temp.end());

        for(int i=0; i<n; i++){
           if(temp[i]==0) ans++;

           else if(temp[i] <= additionalRocks){
               additionalRocks-=temp[i];
               ans++;
           }else{
               break;
           }

        }
        return ans;
        

    }
};
