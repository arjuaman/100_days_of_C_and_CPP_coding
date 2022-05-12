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
    void helper(TreeNode* root, int depth, char dir, int &ans){
        ans = max(ans,depth);
        if(!root) return;
        if(dir=='r'){
            helper(root->left,++depth,'l', ans);
        }
        else{
            helper(root->left,0,'l', ans);
        }
        
        if(dir=='l'){
            helper(root->right,++depth,'r', ans);
        }
        else{
            helper(root->right,0,'r', ans);
        }
    }
    
    int longestZigZag(TreeNode* root) {
        if(!root || (!root->left && !root->right))
            return 0;
        // int Lans = 0, rans=0;
        int ans= 0 ;
        helper(root->right, 0, 'r', ans);
        helper(root->left, 0, 'l', ans);
        return ans;
    }
};