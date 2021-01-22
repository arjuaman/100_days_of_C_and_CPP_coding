/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        int left_ht = height(root->left);
        int right_ht = height(root->right);
        int len = max(left_ht,right_ht)+1;
        return len;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int len = height(original);
        if(len==1) return cloned;
        queue<TreeNode*> q1;
        q1.push(cloned);
        TreeNode *curr=NULL;
        int flag=0;
        while(!q1.empty()){
            curr = q1.front();
            q1.pop();
            if(curr->val == target->val){
                //flag=1;
                break;
            }
            if(curr->left!=NULL)
                q1.push(curr->left);
            if(curr->right!=NULL)
                q1.push(curr->right);
        }
        //if(flag==1)
        return curr;
    }
};