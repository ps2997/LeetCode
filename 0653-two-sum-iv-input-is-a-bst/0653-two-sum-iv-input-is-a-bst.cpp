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
        if(root == NULL) return;
        
        inOrder(root->left, values);
        values.push_back(root->val);
        inOrder(root->right, values);
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        inOrder(root, v);
        
        int s=0, e = v.size()-1;
        while(s<e){
            
            if(v[s]+v[e] == k) return true;
            else if(v[s]+v[e] < k) s++;
            else{
                e--;
            }    
        }
        return false;
    }
};