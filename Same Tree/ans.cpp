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

    void inOrder(TreeNode* root, vector<int> &values){
        if(root==NULL){
            values.push_back(0);
            return;
        }

        inOrder(root->left, values);
        inOrder(root->right, values);
        values.push_back(root->val);

    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        inOrder(p, v1);
        inOrder(q, v2);

        if(v1==v2) return true;
        return false;


    }
};
