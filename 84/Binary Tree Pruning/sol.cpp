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
    
    TreeNode* reachLeaf(TreeNode* root){
        if(root==NULL)
            return NULL;
        // if(root->left == NULL && root->right == NULL){
        //     if(root->val==0){
        //         delete(root);
        //         return NULL;
        //     }
        // }
        root->left = reachLeaf(root->left);
        root->right = reachLeaf(root->right);
        
        if(root->left == NULL && root->right == NULL){
            if(root->val==0){
                delete(root);
                return NULL;
            }
        }
        
        return root;
    }
    TreeNode* pruneTree(TreeNode* root) {
        // TreeNode* ansRoot = NULL;
        return reachLeaf(root);
        // return root;
    }
};