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
    
    
    int findPostion(vector<int> inorder, int element){
        for(int i=0; i<inorder.size(); i++){
            if(inorder[i] == element) return i;
        }
        return -1;
    }
    
    TreeNode* solve(vector<int> preorder, vector<int> inorder, int inOrderStart, int inOrderEnd, int& index, int n){
        
        if(index >=n || inOrderStart > inOrderEnd) return NULL;
        
        int element = preorder[index++];
        TreeNode* node = new TreeNode(element);
        int position = findPostion(inorder, element); 
        
        node->left = solve(preorder, inorder, inOrderStart, position-1, index, n);
        node->right = solve(preorder, inorder, position+1, inOrderEnd, index, n);
        
        return node;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = preorder.size();
        
       int index = 0;
        
        TreeNode* ans = solve(preorder, inorder, 0, n-1, index, n);
            return ans;
        
        
        
        
        
    }
    
    
    // [3, 9, 20, 15,7]  N L R
    
    // [9, 3, 15, 20,7]  L N R
    
                                      // 3
                                //9         // 20
                                        //15   //7
};