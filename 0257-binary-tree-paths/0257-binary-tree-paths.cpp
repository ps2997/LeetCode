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
    
    void func(TreeNode* root, vector<string> &ans, string values){
        
        if(root==NULL) return;
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(values + to_string(root->val));
            // values = "";
            return;
        }
        
        values = values + to_string(root->val) + "->";
        
        func(root->left, ans, values);
        func(root->right, ans, values);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> ans;
        string values = "";
        func(root, ans, values);
        
        return ans;
    }
};