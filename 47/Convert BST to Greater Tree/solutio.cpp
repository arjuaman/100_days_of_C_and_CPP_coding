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
    int sum=0;
public:
    TreeNode* inorderMod(TreeNode* root){
        if(root){
            inorderMod(root->right);
            sum += root->val;
            root->val = sum;
            inorderMod(root->left);
        }
        return root;
    }
    TreeNode* convertBST(TreeNode* root) {
        root = inorderMod(root);
        return root;
    }
};