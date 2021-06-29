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
    bool hasPathSum(TreeNode* root, int target) {
        if(root==NULL)
            return false;
        bool flag = false;
        helper(root,target,flag);
        return flag;
    }
    
    void helper(TreeNode* root, int target, bool &flag){
        if(flag==true)
            return;
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL && target-root->val==0){
            flag = true;
            return;
        }
        helper(root->left,target-root->val,flag);
        helper(root->right,target-root->val,flag);
    }
};