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
      
    void rootToLeaf(TreeNode* root, int sum, int &ans){
        
        if(root==NULL) return ;
        
        if(root->left==NULL && root->right==NULL){
            sum= sum*10 + root->val;
            ans+=sum;
            return;
        }
        
        rootToLeaf(root->left, 10*sum+root->val, ans);
        rootToLeaf(root->right, 10*sum+root->val, ans);

    }
    
    int sumNumbers(TreeNode* root) {
    
          int sum = 0,ans=0;
          rootToLeaf(root, 0, ans);
        return ans;
        
    }
};