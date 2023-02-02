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
    
    TreeNode* leftMax(TreeNode* root){
        
        TreeNode* temp = root;
        while(temp->right!=NULL){
            temp = temp->right;
        }
        return temp;
        
    }
    
    
    // to delete the node there are 3 possibilities
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL) return NULL;
       
        
        else if(root->val > key){
            root->left = deleteNode(root->left, key);
            // return root;
        }
        
        else if(root->val < key){
           root->right = deleteNode(root->right, key);
            // return root;
        }
        
        else{
            
             
            // 0 child
                if((root->left == NULL) && (root->right == NULL)){
                    delete root;
                    return NULL;
                }

            // 1 child
            
                //left node is there and right is not there
                if((root->left != NULL) && (root->right == NULL)){
                   TreeNode* temp = root->left;
                    delete root;
                    return temp;
                }
            
                 //right node is there and left is not there
                if((root->left == NULL) && (root->right != NULL)){
                   TreeNode* temp = root->right;
                    delete root;
                    return temp;
                }
            
           // 2 child
            
                if((root->left != NULL) && (root->right != NULL)){
                    int value = leftMax(root->left)->val;
                    root->val = value;
                    root->left = deleteNode(root->left, value);
                    return root;
                }
        }
        
        
      return root;  
    }
};