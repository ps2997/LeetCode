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
    int minDepth(TreeNode* root) {
        
        if(root==NULL) return 0;
        
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);
        
        if(root->left==NULL && root->right != NULL){
            return 1 + rightDepth;
        }
        
        else if(root->left!=NULL && root->right == NULL){
            return 1 + leftDepth;
        }
        
        else{
            return 1+min(leftDepth, rightDepth);
        }
        
    }
};