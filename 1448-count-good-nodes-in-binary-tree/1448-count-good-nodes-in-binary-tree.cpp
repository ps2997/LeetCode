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

    void solve(TreeNode* root, int &count, int maxForThis){

        if(root==NULL) return;

        if(root->val >= maxForThis){
            count++;
            maxForThis = root->val;
        }

        solve(root->left, count, maxForThis);
        solve(root->right, count, maxForThis);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;
        if(root==NULL) return count;

        solve(root, count, root->val);
        return count;
    }
};