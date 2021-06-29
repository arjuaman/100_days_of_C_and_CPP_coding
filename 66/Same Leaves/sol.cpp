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
#define pb push_back
class Solution {
public:
    void preorder(TreeNode* root, vector<int> &a){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            a.pb(root->val);
        preorder(root->left,a);
        preorder(root->right,a);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a1,a2;
        preorder(root1,a1);
        preorder(root2,a2);
        return a1==a2;
    }
};