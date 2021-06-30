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
    void preorder(TreeNode* parent, int &sum)
    {
        if(parent==NULL)
            return;
        
        TreeNode *leftChild=NULL, *rightChild=NULL;
        if(parent->left!=NULL)
            leftChild = parent->left;
        if(parent->right!=NULL)
            rightChild = parent->right;
        
        if(leftChild && leftChild->left==NULL && leftChild->right==NULL){
            sum += leftChild->val;
        }
        preorder(leftChild,sum);
        preorder(rightChild,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return sum;
        
        preorder(root,sum);
        return sum;
    }
};