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
    vector<vector<int>> ans;
    int height=0;
public:
    
    int heightTree(TreeNode* root){
        if(root==NULL)
            return 0;
        int lh = heightTree(root->left);
        int rh = heightTree(root->right);
        return 1 + max(lh,rh);
    }
    
    void dfs(TreeNode* root, int tar, vector<int> &temp){
        if(root==NULL){
            // int cursum = accumulate(temp.begin(),temp.end(),0);
            // if(cursum==tar){
            //     ans.push_back(temp);
            // }
            
            
            return;
        }
        
        temp.push_back(root->val);
        
        dfs(root->left,tar,temp);
        
        dfs(root->right,tar,temp);
        
        int cursum = accumulate(temp.begin(),temp.end(),0);
            if(cursum==tar && (root->left==NULL && root->right==NULL)){
                ans.push_back(temp);
            }
        
        if(!temp.empty()){
                temp.pop_back();
            }
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        height = heightTree(root);
        // cout<<height;
        dfs(root,targetSum,temp);
        return ans;
    }
};