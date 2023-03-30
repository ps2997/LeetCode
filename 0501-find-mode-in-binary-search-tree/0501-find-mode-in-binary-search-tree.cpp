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
    
    vector<int> findMode(TreeNode* root) {
        
        vector<int> ans, values;
        
        inOrder(root, values);
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<values.size(); i++){
            mp[values[i]]++;
        }
        
        int max = INT_MIN;
        for(auto i:mp){
            if(i.second > max) max = i.second;
        }
        
        
        for(auto i:mp){
            if(i.second == max) ans.push_back(i.first);
        }
        
        // ans.push_back(max);
        return ans;
        
    }
};