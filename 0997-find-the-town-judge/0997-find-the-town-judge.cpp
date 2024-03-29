class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(trust.size()==1){
            return trust[0][1];
        }

        if(trust.size() == 0 && n==1) return 1;

        vector<int> count(n+1);

        for(auto x:trust){
            count[x[0]]--;
            count[x[1]]++;
        }

        for(int i=0; i<count.size(); i++){
            if(count[i] == n-1) return i;
        }
        return -1;
    }

};