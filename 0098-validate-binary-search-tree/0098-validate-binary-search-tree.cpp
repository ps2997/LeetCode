/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void solve(TreeNode* root, vector<int> &ans){
        if(root==NULL) return;
        
        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> v1;
        
        solve(root, v1);
        vector<int> v2 = v1;
        sort(v2.begin(), v2.end());
        
        int j=0;
        for(int i=1; i<v2.size(); i++){
            if(v2[j] == v2[i]) return false;
            j++;
        }
        
        
        if(v1==v2) return true;
        return false;
    }
};