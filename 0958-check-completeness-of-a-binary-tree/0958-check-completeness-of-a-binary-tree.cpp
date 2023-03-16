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
    
    int countNodes(TreeNode* root){
        if(root == NULL) return 0;
        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }
    
    bool solve(TreeNode* root, int index, int cnt){
        if(root==NULL) return true;
        
        if(index >= cnt) return false;
        
        else{
            bool left = solve(root->left, 2*index + 1, cnt);
            bool right = solve(root->right, 2*index + 2, cnt);
            return (left && right);
        }
        
        
    }
    
    bool isCompleteTree(TreeNode* root) {
        int ans = countNodes(root);
        int index = 0;
        return solve(root, index, ans);
         
        // cnt = 6
        
        
    }
};