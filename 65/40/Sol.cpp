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
    vector<string> ans;
    string s="";
    string arrow="->";
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
            return ans;
        if(root->left==NULL && root->right==NULL){
            s = to_string(root->val);
            ans.push_back(s);
            return ans;
        }
        
        helper(root, s, ans);
//         if(!ans.empty()){
            
//         }
        return ans;
    }
    
    void helper(TreeNode* root, string s, vector<string> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            s += to_string(root->val);
            ans.push_back(s);
            s = "";
            return;
        }
        helper(root->left,s+to_string(root->val)+arrow,ans);
        helper(root->right,s+to_string(root->val)+arrow,ans);
    }
};