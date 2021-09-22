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
    int cnt=0;
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(root){
            helper(root, targetSum);
            pathSum(root->left, targetSum);
            pathSum(root->right, targetSum);
        }
        return cnt;
    }
    
    void helper(TreeNode* root, int target){
        if(root==NULL)
            return;
        if(root->val==target)
            cnt++;
        helper( root->left,  target - root->val);
        helper( root->right, target - root->val);
    }
};