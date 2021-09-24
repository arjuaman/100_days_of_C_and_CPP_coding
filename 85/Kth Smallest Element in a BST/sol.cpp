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
    int ans, dest, i=0;
    bool flag=false;
public:
    void inorder(TreeNode* root, vector<int> &trav){
        if(root==NULL)
            return;
        inorder(root->left, trav);
        trav.push_back(root->val);
        inorder(root->right, trav);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> trav;
        inorder(root, trav);
        int n = trav.size();
        return trav[k-1];
    }
};