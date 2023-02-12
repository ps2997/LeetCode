class Solution {
public:    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return NULL;
        TreeNode* ans= new TreeNode((root1?root1->val:0) + (root2?root2->val:0));
        ans->left= mergeTrees(root1?root1->left:NULL , root2?root2->left:NULL);
        ans->right= mergeTrees(root1?root1->right:NULL , root2?root2->right:NULL);
        return ans;
    }
};