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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // if(root==subRoot) return true;
        if(root==NULL) return false;
        if(isSame(root,subRoot))
            return true;
        return isSubtree(root->left, subRoot)||isSubtree(root->right, subRoot);
    }
    
    bool isSame(TreeNode* s, TreeNode* t){
        if(s==NULL && t==NULL) return true;
        if(s==NULL || t==NULL) return false;
        if(s->val!=t->val)
            return false;
        return isSame(s->left, t->left) && isSame(s->right, t->right);
    }
};