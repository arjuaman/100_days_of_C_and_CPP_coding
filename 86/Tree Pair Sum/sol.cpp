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
    vector<int> arr;
public:
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int lo=0, hi = arr.size()-1;
        while(lo<hi){
            if(arr[lo]+arr[hi]==k)
                return true;
            else if(arr[lo]+arr[hi]<k)
                lo++;
            else
                hi--;
        }
        return false;
    }
};