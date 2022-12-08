class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> a;
        sort(candidates.begin(), candidates.end());
        solve(candidates, a, 0, target, 0);
        return ans;
    }

    void solve(vector<int>& candidates, vector<int> a, int j, int target, int sum){
        if(j == candidates.size())
            return;

        // for(int i = 0; i < a.size(); ++i){
        //     cout << a[i] << " ";
        // }
        cout << endl;
        if(sum == target){
            sum = sum - candidates[j];
            ans.push_back(a);
            a.pop_back();


        }else if(sum > target){
            sum = sum - candidates[j];
            a.pop_back();


        }
        else{
            solve(candidates, a, j + 1, target, sum);
            a.push_back(candidates[j]);
            solve(candidates, a, j, target, sum + candidates[j]);
        }

  

    }

};
